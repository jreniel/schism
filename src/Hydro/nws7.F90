!   Copyright 2014 College of William and Mary
!
!   Licensed under the Apache License, Version 2.0 (the "License");
!   you may not use this file except in compliance with the License.
!   You may obtain a copy of the License at
!
!     http://www.apache.org/licenses/LICENSE-2.0
!
!   Unless required by applicable law or agreed to in writing, software
!   distributed under the License is distributed on an "AS IS" BASIS,
!   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
!   See the License for the specific language governing permissions and
!   limitations under the License.
module netcdf_io_ug

    use schism_glbl, only : rkind,start_year,start_month,start_day,start_hour,utc_start
    implicit none

    integer, parameter :: max_files = 9999
    integer, parameter :: max_times = 100000 !max. # of time records from all files

    type dataset_info_ug
        character name*50
        logical :: exist = .false.
        integer :: num_files = 0 !total # of stacks
        integer :: node_dim_size = 0
        ! integer :: ny = 0
        ! integer :: num_nodes = 0
        ! integer :: num_elems = 0
        ! real(rkind), allocatable, dimension(:,:) :: lon, lat
        real(rkind), allocatable, dimension(:,:) :: weight
        ! integer, allocatable, dimension(:) :: node_i, node_j
        ! integer, allocatable, dimension(:,:) :: node_num, elem_nodes
        ! integer, allocatable, dimension(:) :: in_elem_for_out_node
        integer :: num_times = 0
        real(rkind), dimension(max_times) :: times !Julian days for time records from all stacks
        integer, dimension(max_times) :: file_num_for_time !stack # for each record
        integer, dimension(max_times) :: time_num_for_time
        integer, dimension(max_files) :: jdate_for_file
        real(rkind) :: max_window_hours
        real(rkind) :: relative_weight
        logical :: fail_if_missing
    end type dataset_info_ug
        
    integer         :: start_jdate
    real(rkind) :: start_frac_jdate = -9999.0d0

    !relative weights for air; can be >1 (will be weight-averaged)
    real(rkind) :: air_1_relative_weight = 1.0d0
    real(rkind) :: air_2_relative_weight = 99.0d0
    real(rkind) :: air_1_max_window_hours = 120.0d0
    real(rkind) :: air_2_max_window_hours = 120.0d0
    logical     :: air_1_fail_if_missing = .true.
    logical     :: air_2_fail_if_missing = .false.
    character (len=50)  :: air_1_file = 'sflux_air_1'
    character (len=50)  :: air_2_file = 'sflux_air_2'
    character (len=50)  :: uwind_name = 'uwind'
    character (len=50)  :: vwind_name = 'vwind'
    character (len=50)  :: prmsl_name = 'prmsl'
    character (len=50)  :: stmp_name  = 'stmp'
    character (len=50)  :: spfh_name  = 'spfh'

    real(rkind) :: rad_1_relative_weight = 1.0d0
    real(rkind) :: rad_2_relative_weight = 99.0d0
    real(rkind) :: rad_1_max_window_hours = 120.0d0
    real(rkind) :: rad_2_max_window_hours = 24.0d0
    logical     :: rad_1_fail_if_missing = .true.
    logical     :: rad_2_fail_if_missing = .false.
    character (len=50)  :: rad_1_file = 'sflux_rad_1'
    character (len=50)  :: rad_2_file = 'sflux_rad_2'
    character (len=50)  :: dlwrf_name = 'dlwrf'
    character (len=50)  :: dswrf_name = 'dswrf'
       
    real(rkind) :: prc_1_relative_weight = 1.0d0
    real(rkind) :: prc_2_relative_weight = 99.0d0
    real(rkind) :: prc_1_max_window_hours = 120.0d0
    real(rkind) :: prc_2_max_window_hours = 24.0d0
    logical     :: prc_1_fail_if_missing = .true.
    logical     :: prc_2_fail_if_missing = .false.
    character (len=50)  :: prc_1_file = 'sflux_prc_1'
    character (len=50)  :: prc_2_file = 'sflux_prc_2'
    character (len=50)  :: prate_name = 'prate'
    character (len=50)  :: srate_name = 'srate'

    namelist /sflux_inputs/ &
    &    air_1_relative_weight, air_2_relative_weight,              &
    &    air_1_max_window_hours, air_2_max_window_hours,            &
    &    air_1_fail_if_missing, air_2_fail_if_missing,              &
    &    air_1_file, air_2_file,                                    &
    &    uwind_name, vwind_name, prmsl_name, stmp_name, spfh_name,  &
    &    rad_1_relative_weight, rad_2_relative_weight,              &
    &    rad_1_max_window_hours, rad_2_max_window_hours,            &
    &    rad_1_fail_if_missing, rad_2_fail_if_missing,              &
    &    rad_1_file, rad_2_file,                                    &
    &    dlwrf_name, dswrf_name,                                    &
    &    prc_1_relative_weight, prc_2_relative_weight,              &
    &    prc_1_max_window_hours, prc_2_max_window_hours,            &
    &    prc_1_fail_if_missing, prc_2_fail_if_missing,              &
    &    prc_1_file, prc_2_file,                                    &
    &    prate_name,srate_name

end module netcdf_io_ug

subroutine get_wind_ug(&
        &time, u_air_node, v_air_node, p_air_node, &
        &t_air_node, q_air_node)

    use schism_glbl, only : rkind, npa,fdb,lfdb
    use schism_msgp, only : myrank,parallel_abort
    use netcdf_io_ug
    implicit none

    real(rkind), intent(in) :: time
    real(rkind), dimension(npa), intent(out) :: &
        &u_air_node, v_air_node, p_air_node, t_air_node, q_air_node

    ! local variables
    integer num_nodes_out
    logical, save :: first_call = .true.
    type(dataset_info_ug), save :: dataset_1, dataset_2
    real(rkind) time_now
    real(rkind), parameter :: secs_per_day = 86400.0d0
    real(rkind), parameter :: t_freeze = 273.15d0
    character data_name*50

    ! define the local variables num_nodes_out
    num_nodes_out = npa

    if (first_call) then
        call get_sflux_inputs()

        dataset_1%name             = air_1_file
        dataset_1%max_window_hours = air_1_max_window_hours
        dataset_1%fail_if_missing  = air_1_fail_if_missing
        dataset_1%relative_weight  = air_1_relative_weight
        dataset_2%name             = air_2_file
        dataset_2%max_window_hours = air_2_max_window_hours
        dataset_2%fail_if_missing  = air_2_fail_if_missing
        dataset_2%relative_weight  = air_2_relative_weight

        ! output some details
        if(myrank==0) then
            write(16,*)
            write(16,*) 'get_wind: sflux_inputs'
            write(16,*) '  start_year             = ', start_year
            write(16,*) '  start_month            = ', start_month
            write(16,*) '  start_day              = ', start_day
            write(16,*) '  start_hour             = ', start_hour
            write(16,*) '  utc_start              = ', utc_start
            write(16,*) '  start_frac_jdate       = ', start_frac_jdate
            write(16,*) '  air_1_file             = ', trim(air_1_file)
            write(16,*) '  air_1_max_window_hours = ', air_1_max_window_hours
            write(16,*) '  air_1_fail_if_missing  = ', air_1_fail_if_missing
            write(16,*) '  air_1_relative_weight  = ', air_1_relative_weight
            write(16,*) '  air_2_file             = ', trim(air_2_file)
            write(16,*) '  air_2_max_window_hours = ', air_2_max_window_hours
            write(16,*) '  air_2_fail_if_missing  = ', air_2_fail_if_missing
            write(16,*) '  air_2_relative_weight  = ', air_2_relative_weight
            write(16,*) '  uwind_name             = ', trim(uwind_name)
            write(16,*) '  vwind_name             = ', trim(vwind_name)
            write(16,*) '  prmsl_name             = ', trim(prmsl_name)
            write(16,*) '  stmp_name              = ', trim(stmp_name)
            write(16,*) '  spfh_name              = ', trim(spfh_name)
        endif !myrank==0

        ! get basic info for dataset
        call get_dataset_info_ug(dataset_1)
        call get_dataset_info_ug(dataset_2)

    endif !first_call

    ! get the current time
    time_now = start_frac_jdate + time/secs_per_day

    ! output info to debug file
#ifdef DEBUG
    write(38,*)
    write(38,*) 'get_wind: time (sec) = ', time
    write(38,*) 'first_call = ', first_call
    write(38,*) 'num_nodes_out = ', num_nodes_out
    write(38,*) 'current jdate = ', time_now
    write(38,*) 'dataset_1 exist = ', dataset_1%exist
    write(38,*) 'dataset_2 exist = ', dataset_2%exist
#endif

    ! get the data at this time
    data_name = trim(uwind_name)
    first_call = .false.
    call parallel_abort('get_wind_ug: not implemented yet')

end !get_wind_ug



subroutine get_dataset_info_ug(info)

    use schism_glbl, only : rkind, npa, xlon, ylat,in_dir,len_in_dir
    use schism_msgp, only : myrank,parallel_abort
    use netcdf_io_ug
    implicit none
    type(dataset_info_ug), intent(inout) :: info

    character file_name*50, get_file_name*50, data_name*50
    integer file_num, alloc_stat, num_nodes_out

    ! define num_nodes_out (number of nodes in model grid)
    num_nodes_out = npa

    ! determine if the first file exists for this dataset
    file_num = 1
    file_name = get_file_name(info%name, file_num)
    inquire(file=in_dir(1:len_in_dir)//file_name, exist=info%exist)

    if(myrank==0) then
        write(16,*)
        write(16,*) 'netCDF dataset and existence: ', &
                    &trim(info%name), info%exist
        write(16,*)
        call flush(16) ! flush "mirror.out"
    endif

    ! run should fail if dataset doesn't exist and fail_if_missing is set
    if ((.not.info%exist).and.(info%fail_if_missing)) then
        call halt_error ('missing dataset: ' // file_name)
    endif

    ! if this dataset exists, then get additional info
    if (info%exist) then
        if(myrank==0) then
            write(16,*) 'getting additional info for: ', info%name
            call flush(16) ! flush "mirror.out"
        endif
        call get_times_ug(&
            &info%name,&
            &info%times,&
            &info%file_num_for_time,&
            &info%time_num_for_time,&
            &info%num_times,&
            &info%num_files,&
            &info%jdate_for_file,&
            &info%node_dim_size,&
            &max_times,&
            &max_files,&
            &)
        ! TODO: Here's where we do the UG reading
        ! allocate memory for lon and lat
        ! allocate (info%lon(info%nx,info%ny), &
        !           &info%lat(info%nx,info%ny), &
        !           &stat=alloc_stat)
        ! call check_allocation('lon/lat', 'get_dataset_info', alloc_stat)

        ! read in lon and lat
        ! data_name = 'lon'
        ! call read_coord (file_name, data_name, info%lon, info%nx, info%ny)
        ! data_name = 'lat'
        ! call read_coord (file_name, data_name, info%lat, info%nx, info%ny)

        ! convert lon/lat to radians, and optionally convert to -180->180 for lon
        ! call fix_coords (info%lon, info%lat, info%nx, info%ny)

        ! get the number of nodes and elements for the sflux grid
        ! info%num_nodes = info%nx * info%ny
        ! info%num_elems = (info%nx - 1) * (info%ny - 1) * 2

        ! write(*,*) info%name, info%num_nodes, info%num_elems
          
        ! allocate memory for grid conversion variables
        ! allocate (info%node_i(info%num_nodes), &
        !           &info%node_j(info%num_nodes), &
        !           &info%node_num(info%nx,info%ny), &
        !           &info%elem_nodes(info%num_elems,3), &
        !           &info%in_elem_for_out_node(num_nodes_out), &
        !           &stat=alloc_stat)
        ! call check_allocation('integer grid variables', &
        !                       &'get_dataset_info', &
        !                       &alloc_stat)
        ! allocate (info%weight(num_nodes_out,3), stat=alloc_stat)
        ! call check_allocation('real grid variables', &
        !                       &'get_dataset_info', &
        !                       &alloc_stat)
        ! ! create list of all nodes for this grid as in .gr3 format
        ! call list_nodes (info%node_i, info%node_j, info%node_num, &
        !                  &info%num_nodes, info%nx, info%ny)
        ! ! create list of all elements for this grid as in .gr3 format
        ! call list_elems (info%elem_nodes, info%node_num, &
        !                    &info%nx, info%ny, info%num_elems)
        ! ! calculate the weightings from data grid to model nodes
        ! call get_weight (info%lon, info%lat, xlon, ylat, &
        !                    &info%elem_nodes, info%node_i, info%node_j, &
        !                    &info%nx, info%ny, info%num_elems, &
        !                    &info%num_nodes, &
        !                    &num_nodes_out, info%in_elem_for_out_node, &
        !                    &info%weight)
    endif !info%exist
end !get_dataset_info


subroutine get_times_ug(&
        &dataset_name,&
        &times,&
        &file_num_for_time,&
        &time_num_for_time,&
        &num_times,&
        &num_files,&
        &jdate_for_file,&
        &node_dim_size,&
        &max_times,&
        &max_files)

    use schism_glbl, only : rkind,in_dir,len_in_dir
    use schism_msgp, only : parallel_abort
    use schism_msgp, only : myrank
    implicit none

    character, intent(in) ::  dataset_name*50
    integer, intent(in) :: max_times, max_files
    integer, intent(out) :: num_times, num_files, node_dim_size
    real(rkind), intent(out), dimension(max_times) :: times !Julian days for increasing time records (after concatenation from all stacks)
    integer, intent(out), dimension(max_times) :: file_num_for_time, time_num_for_time
    integer, intent(out), dimension(max_files) :: jdate_for_file
    
    integer file_num, num_file_times, nx_test, ny_test
    logical have_file, repeat, at_end
    character file_name*50, get_file_name*50
    integer, parameter :: max_file_times = 1000 !max. # of time records with each file
    real(rkind) test_time, file_times(max_file_times)
    integer i_time, repeat_num

    ! determine how many files there are
    file_num = 0
    do
        file_num = file_num + 1
        file_name = get_file_name(dataset_name, file_num)
        inquire(file=in_dir(1:len_in_dir)//file_name, exist=have_file)
        if (.not. have_file) exit
            num_files = file_num
        enddo
        ! ensure that num_files doesn't exceed max_files
        if (num_files .gt. max_files) then
            call halt_error ('num_files exceeds max_files!')
        endif

        ! get the dimensions of the first of the files
        file_num = 1
        file_name = get_file_name(dataset_name, file_num)
        call get_dims_ug(file_name, node_dim_size)
        call parallel_abort('get_times_ug: node_dim_size !!!')
        ! ! loop over files
        ! do file_num = 1, num_files
        !     ! get the name of this file
        !     file_name = get_file_name(dataset_name, file_num)
        !     ! make sure that the physical dimensions (nx and ny) are the same
        !     call get_dims (file_name, nx_test, ny_test)
        !     if ( (nx_test .ne. nx) .or. (ny_test .ne. ny) ) then
        !         call halt_error ('nx and/or ny mismatch!')
        !     endif
        !     ! get the times in this file
        !     call get_file_times(&
        !         &file_name,&
        !         &file_times,&
        !         &jdate_for_file(file_num),& !Julian day for base_date
        !         &max_file_times,&
        !         &num_file_times,&
        !         &)
        !     ! check that num_file_times does not exceed max_times
        !     if (num_file_times .gt. max_times) then
        !         call halt_error ('num_file_times exceeds max_times!')
        !     endif
        !     ! if this is the first file, then store all file_times in the overall
        !     ! time vector (add jdate_for_file)
        !     if (file_num .eq. 1) then
        !         do i_time = 1, num_file_times
        !             times(i_time) = real(jdate_for_file(file_num),rkind) + file_times(i_time)
        !             file_num_for_time(i_time) = file_num
        !             time_num_for_time(i_time) = i_time
        !         enddo
        !         num_times = num_file_times
        !     ! if this is not the first file, then loop over file_times, and add them
        !     ! one at a time _if_ they're not duplicates
        !     else
        !         do i_time = 1, num_file_times
        !             test_time = real(jdate_for_file(file_num),rkind) + file_times(i_time)
        !             call check_times (test_time, times, num_times, repeat_num, repeat, at_end)
        !             ! if this time is a repeat, then use this file for this time
        !             if (repeat) then
        !                 file_num_for_time(repeat_num) = file_num
        !                 time_num_for_time(repeat_num) = i_time
        !             ! if this is not a repeat, and is at the end, then add it to the list
        !             ! (but first check to make sure max_times isn't exceeded)
        !             else if (at_end) then
        !                 num_times = num_times + 1
        !                 if (num_times .gt. max_times) then
        !                     call halt_error ('num_times exceeds max_times!')
        !                 endif
        !                 times(num_times) = test_time
        !                 file_num_for_time(num_times) = file_num
        !                 time_num_for_time(num_times) = i_time
        !             endif
        !         enddo
        !     endif
        ! enddo
    ! enddo
    ! if(myrank==0) then
      ! write(16,*) 'num_files = ', num_files
      ! write(16,*) 'num_times = ', num_times
      ! write(16,*) 'first time = ', times(1)
      ! write(16,*) 'last  time = ', times(num_times)
      ! call flush(16) ! flush "mirror.out"
    ! endif
end !get_times_ug



subroutine get_dims_ug(file_name, node_dim_size)
    use schism_glbl, only : in_dir,out_dir,len_in_dir,len_out_dir
    use schism_msgp, only : myrank,itype,rtype,comm,parallel_abort
    use netcdf
    implicit none
    character, intent(in) :: file_name*50
    integer, intent(out) :: node_dim_size

    integer :: ncid, iret, node_dim, dim_ids(2),test_var_id,istat
    character, parameter :: test_variable*50 = 'node'

    if(myrank==0) then
        ! open file_name and enter read-only mode
        iret = nf90_open(in_dir(1:len_in_dir)//file_name,OR(NF90_NETCDF4,NF90_NOWRITE),ncid)
        if(iret.ne.NF90_NOERR) call parallel_abort('get_dims_ug(1)')

        ! get the variable ID for the test variable
        iret = nf90_inq_varid(ncid, test_variable, test_var_id)
        if(iret.ne.NF90_NOERR) call parallel_abort('get_dims_ug(2)')

        ! get the dimension IDs for the test variable
        iret=nf90_inquire_variable(ncid,test_var_id,dimids=dim_ids(1:2))
        if(iret.ne.NF90_NOERR) call parallel_abort('get_dims_ug(3)')

        call parallel_abort('get_dims(4)')
        !! determine number of points in the nx and ny dimensions
        !  nx_dim = dim_ids(1)
        !  !iret = nf_inq_dimlen(ncid, nx_dim, nx)
        !  iret = nf90_inquire_dimension(ncid,nx_dim,len=nx)
        !  if(iret.ne.NF90_NOERR) call parallel_abort('get_dims(4)')
!!          call check_err(iret)

        !  ny_dim = dim_ids(2)
        !  !iret = nf_inq_dimlen(ncid, ny_dim, ny)
        !  iret = nf90_inquire_dimension(ncid,ny_dim,len=ny)
        !  if(iret.ne.NF90_NOERR) call parallel_abort('get_dims(5)')
!!          call check_err(iret)

!!   close the netCDF file
        !  iret = nf90_close(ncid)
        !  if(iret.ne.NF90_NOERR) call parallel_abort('get_dims(6)')
!!          call check_err(iret)
    endif !myrank
    call mpi_barrier(comm,istat)
    !call mpi_bcast(nx,1,itype,0,comm,istat)
    !call mpi_bcast(ny,1,itype,0,comm,istat)
end !get_dims_ug
