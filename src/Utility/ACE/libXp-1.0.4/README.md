libXp - X Print Client Library
------------------------------

This library provides support for X11 clients to print via the X Print
Extension, as previously implemented in the Xprt server.  X.Org removed
support for the Xprt server from the xorg-server releases in the 1.6.0
release in 2009, and the standalone git repo it was moved to has been
unmaintained since 2009, making it difficult to actually use this library.

While X.Org has continued to maintain this library for binary compatibility,
we do not plan to do so for the long term and encourage anyone still building
or shipping it to investigate how to stop doing so going forward as we now
consider it to be deprecated.

All questions regarding this software should be directed at the
Xorg mailing list:

  https://lists.x.org/mailman/listinfo/xorg

The primary development code repository can be found at:

  https://gitlab.freedesktop.org/xorg/lib/libXp

Please submit bug reports and requests to merge patches there.

For patch submission instructions, see:

  https://www.x.org/wiki/Development/Documentation/SubmittingPatches

