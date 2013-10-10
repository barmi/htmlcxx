lib_LTLIBRARIES = libcss_parser_pp.la libcss_parser.la

libcss_parser_pp_la_SOURCES = parser_pp.h parser_pp.cc parser.c
libcss_parser_pp_la_LDFLAGS = -version-info 0:0:0

libcss_parser_la_SOURCES = css_syntax.y css_lex.l css_lex.h css_syntax.h parser.c parser.h
libcss_parser_la_LDFLAGS = -version-info 0:0:0

AM_YFLAGS = -d
AM_LFLAGS = -i

includedir = $(prefix)/include/htmlcxx/css
include_HEADERS = parser.h parser_pp.h

EXTRA_DIST = default.css
cssdir = $(pkgdatadir)/css
css_DATA = default.css
