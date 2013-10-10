SUBDIRS = html css

bin_PROGRAMS = htmlcxx
htmlcxx_SOURCES = htmlcxx.cc wingetopt.h 

htmlcxx_LDADD = html/libhtmlcxx.la css/libcss_parser_pp.la css/libcss_parser.la

EXTRA_DIST = ASF-2.0 LGPL_V2 wingetopt.c htmlcxx.spec htmlcxx.vcproj htmlcxxapp.vcproj htmlcxx.pc.in

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = htmlcxx.pc
