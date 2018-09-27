#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

#AC_PREREQ(2.57)
AC_INIT(htmlcxx.cc)
AM_INIT_AUTOMAKE(htmlcxx, 0.86)
AM_CONFIG_HEADER([config.h])
AM_DISABLE_STATIC

# Checks for programs.
AC_PROG_CXX
AC_PROG_CC
AM_PROG_LEX
AC_PROG_YACC
AC_PROG_LIBTOOL

# Checks for libraries.
# Replace `main' with a function in -lfl:
AC_CHECK_LIB(fl, main)
AC_CHECK_LIB(iconv, iconv_open)


# Checks for header files.
AC_HEADER_STDC
# AC_CHECK_HEADERS([])

# Checks for typedefs, structures, and compiler characteristics.
AC_HEADER_STDBOOL
AC_C_CONST
AC_C_INLINE
AC_TYPE_SIZE_T
AC_HEADER_TIME

# Checks for library functions.

AC_LANG_CPLUSPLUS
CXXFLAGS="$CXXFLAGS -DDEFAULT_CSS=\"\\\"$datadir/htmlcxx/css/default.css\\\"\""

AC_CONFIG_FILES([Makefile html/Makefile css/Makefile])
AC_OUTPUT(htmlcxx.pc)
