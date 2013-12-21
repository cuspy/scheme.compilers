AC_INIT([SchemeArt], [0.1], [software@imp.bugs3.com], [schemeart], [http:///])
AC_PREREQ([2.59])
AM_INIT_AUTOMAKE([1.9 -Wall no-define])
AC_CONFIG_HEADERS([config.h])
AC_PROG_CXX

AC_LANG(C++)
SAVED_LDFLAGS=$LDFLAGS
LDFLAGS="$LDFLAGS -lpondyparser"
AC_LINK_IFELSE(
  [AC_LANG_PROGRAM([#include ],
    [cola::matrix dummy])],
  [TEST_LIBS="$TEST_LIBS -lpondyparser"] [HAVE_PONDYPARSER=1],
[AC_MSG_WARN([Install libpondyparser version >= 0.6.3, get it at http://sf.net/projects/libpondyparser. If you install it, include it in your LD_LIBRARY_PATH and you can negate this error. If it is installed in a place where your runtime linker can find it, you'll be allright.])])
LDFLAGS=$SAVED_LDFLAGS

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
