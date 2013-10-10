%define name htmlcxx
%define version 0.80
%define release 1

Summary: A html/css1 parser in C++
Name: %{name}
Version: %{version}
Release: %{release}
Source: %{name}-%{version}.tar.gz
License: LGPL
URL: http://htmlcxx.sf.net
BuildArch: i386
BuildRoot: %{_tmppath}/%{name}-%{version}-root

%description
This is a html/css1 parser with politics created trying to mimic mozilla firefox (http://www.mozilla.org) behavior. So you should expect parse trees similar to those create by firefox. However, differently from firefox, htmlcxx does not insert non-existent stuff in your html. Therefore, serializing the DOM tree gives exactly the same bytes contained in the original HTML document.

%prep
rm -Rf $RPM_BUILD_ROOT

%setup
mkdir $RPM_BUILD_ROOT
mkdir $RPM_BUILD_ROOT/usr
%configure --prefix=/usr

%build
make

%install
DESTDIR=$RPM_BUILD_ROOT/ make install

%files
%defattr(755,root,root)
%_libdir
%_bindir
%_datadir

%package dev
Summary: Develoopment headers

%description dev
Development headers
%files dev
%_includedir

%changelog
* Thu Jun 16 2006 Davi de Castro Reis <davi@akwan.com.br>
+ Version 0.80 released
* Thu Jun 9 2005 Davi de Castro Reis <davi@akwan.com.br>
+ Created spec
