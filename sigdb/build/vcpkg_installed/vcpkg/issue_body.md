Package: libedit:x64-linux@2024-08-08

**Host Environment**

- Host: x64-linux
- Compiler: GNU 15.2.1
- CMake Version: 3.31.10
-    vcpkg-tool version: 2026-03-04-4b3e4c276b5b87a649e66341e11553e8c577459c
    vcpkg-scripts version: 1e199d32ad 2026-03-06 (6 days ago)

**To Reproduce**

`vcpkg install `

**Failure logs**

```
libedit currently requires the following programs from the system package manager:
    autoconf autoheader aclocal automake libtoolize
On Debian and Ubuntu derivatives:
    sudo apt install autoconf libtool
On recent Red Hat and Fedora derivatives:
    sudo dnf install autoconf libtool
On Arch Linux and derivatives:
    sudo pacman -S autoconf automake libtool
On Alpine:
    apk add autoconf automake libtool
-- Using cached libedit-20240808-3.1.tar.gz
-- Cleaning sources at /home/joe/repos/sigdb/vcpkg/buildtrees/libedit/src/20240808-3-eb4c8bbbd6.clean. Use --editable to skip cleaning for the packages you specify.
-- Extracting source /home/joe/repos/sigdb/vcpkg/downloads/libedit-20240808-3.1.tar.gz
-- Using source at /home/joe/repos/sigdb/vcpkg/buildtrees/libedit/src/20240808-3-eb4c8bbbd6.clean
-- Getting CMake variables for x64-linux-dbg
-- Getting CMake variables for x64-linux-rel
-- Generating configure for x64-linux
-- Finished generating configure for x64-linux
-- Configuring x64-linux-dbg
CMake Error at scripts/cmake/vcpkg_execute_required_process.cmake:127 (message):
    Command failed: /usr/bin/bash -c "V=1 ./../src/20240808-3-eb4c8bbbd6.clean/configure  \"--disable-silent-rules\" \"--verbose\" \"--disable-shared\" \"--enable-static\" \"--prefix=/home/joe/repos/sigdb/sigdb/build/vcpkg_installed/x64-linux/debug\" \"--bindir=\\${prefix}/../tools/libedit/debug/bin\" \"--sbindir=\\${prefix}/../tools/libedit/debug/sbin\" \"--libdir=\\${prefix}/lib\" \"--includedir=\\${prefix}/../include\" \"--datarootdir=\\${prefix}/share/libedit\""
    Working Directory: /home/joe/repos/sigdb/vcpkg/buildtrees/libedit/x64-linux-dbg
    Error code: 1
    See logs for more information:
      /home/joe/repos/sigdb/vcpkg/buildtrees/libedit/config-x64-linux-dbg-config.log
      /home/joe/repos/sigdb/vcpkg/buildtrees/libedit/config-x64-linux-dbg-out.log
      /home/joe/repos/sigdb/vcpkg/buildtrees/libedit/config-x64-linux-dbg-err.log

Call Stack (most recent call first):
  scripts/cmake/vcpkg_configure_make.cmake:867 (vcpkg_execute_required_process)
  ports/libedit/portfile.cmake:26 (vcpkg_configure_make)
  scripts/ports.cmake:206 (include)



```

<details><summary>/home/joe/repos/sigdb/vcpkg/buildtrees/libedit/config-x64-linux-dbg-err.log</summary>

```
configure: error: libncurses, libcurses, libtermcap or libtinfo is required!
```
</details>

<details><summary>/home/joe/repos/sigdb/vcpkg/buildtrees/libedit/config-x64-linux-dbg-out.log</summary>

```
checking for gcc... /usr/bin/cc
checking whether the C compiler works... yes
checking for C compiler default output file name... a.out
checking for suffix of executables... 
checking whether we are cross compiling... no
checking for suffix of object files... o
checking whether the compiler supports GNU C... yes
checking whether /usr/bin/cc accepts -g... yes
checking for /usr/bin/cc option to enable C11 features... none needed
checking whether /usr/bin/cc understands -c and -o together... yes
checking for stdio.h... yes
checking for stdlib.h... yes
checking for string.h... yes
checking for inttypes.h... yes
checking for stdint.h... yes
checking for strings.h... yes
checking for sys/stat.h... yes
checking for sys/types.h... yes
checking for unistd.h... yes
checking for wchar.h... yes
checking for minix/config.h... no
checking for vfork.h... no
checking whether it is safe to define __EXTENSIONS__... yes
checking whether _XOPEN_SOURCE should be defined... no
checking for a BSD-compatible install... /usr/bin/install -c
checking whether sleep supports fractional seconds... yes
checking filesystem timestamp resolution... 0.01
checking whether build environment is sane... yes
checking for a race-free mkdir -p... /usr/bin/mkdir -p
checking for gawk... gawk
checking whether make sets $(MAKE)... yes
checking whether make supports the include directive... yes (GNU style)
checking whether make supports nested variables... yes
checking xargs -n works... yes
checking dependency style of /usr/bin/cc... gcc3
checking build system type... x86_64-pc-linux-gnu
checking host system type... x86_64-pc-linux-gnu
checking how to print strings... printf
checking for a sed that does not truncate output... /usr/bin/sed
checking for grep that handles long lines and -e... /usr/bin/grep
checking for egrep... /usr/bin/grep -E
checking for fgrep... /usr/bin/grep -F
checking for ld used by /usr/bin/cc... /usr/bin/ld
checking if the linker (/usr/bin/ld) is GNU ld... yes
checking for BSD- or MS-compatible name lister (nm)... /usr/bin/nm
checking the name lister (/usr/bin/nm) interface... BSD nm
checking whether ln -s works... yes
checking the maximum length of command line arguments... 1572864
checking how to convert x86_64-pc-linux-gnu file names to x86_64-pc-linux-gnu format... func_convert_file_noop
checking how to convert x86_64-pc-linux-gnu file names to toolchain format... func_convert_file_noop
checking for /usr/bin/ld option to reload object files... -r
checking for file... file
checking for objdump... /usr/bin/objdump
checking how to recognize dependent libraries... pass_all
checking for dlltool... no
checking how to associate runtime and link libraries... printf %s\n
checking for ranlib... /usr/bin/ranlib
checking for archiver @FILE support... @
checking for strip... /usr/bin/strip
checking command to parse /usr/bin/nm output from /usr/bin/cc object... ok
checking for sysroot... no
checking for a working dd... /usr/bin/dd
checking how to truncate binary pipes... /usr/bin/dd bs=4096 count=1
checking for mt... no
checking if : is a manifest tool... no
checking for dlfcn.h... yes
checking for objdir... .libs
checking if /usr/bin/cc supports -fno-rtti -fno-exceptions... no
checking for /usr/bin/cc option to produce PIC... -fPIC -DPIC
checking if /usr/bin/cc PIC flag -fPIC -DPIC works... yes
checking if /usr/bin/cc static flag -static works... no
checking if /usr/bin/cc supports -c -o file.o... yes
checking if /usr/bin/cc supports -c -o file.o... (cached) yes
checking whether the /usr/bin/cc linker (/usr/bin/ld -m elf_x86_64) supports shared libraries... yes
checking dynamic linker characteristics... GNU/Linux ld.so
checking how to hardcode library paths into programs... immediate
checking whether stripping libraries is possible... yes
checking if libtool supports shared libraries... yes
checking whether to build shared libraries... no
checking whether to build static libraries... yes
checking for gcc... (cached) /usr/bin/cc
checking whether the compiler supports GNU C... (cached) yes
checking whether /usr/bin/cc accepts -g... (cached) yes
checking for /usr/bin/cc option to enable C11 features... (cached) none needed
checking whether /usr/bin/cc understands -c and -o together... (cached) yes
checking whether ln -s works... yes
checking for gawk... (cached) gawk
checking for nroff... /usr/bin/nroff
checking for tgetent in -lncurses... no
checking for tgetent in -lcurses... no
checking for tgetent in -ltermcap... no
checking for tgetent in -ltinfo... no
```
</details>

<details><summary>/home/joe/repos/sigdb/vcpkg/buildtrees/libedit/config-x64-linux-dbg-config.log</summary>

```
This file contains any messages produced by compilers while
running configure, to aid debugging if configure makes a mistake.

It was created by libedit configure 3.1, which was
generated by GNU Autoconf 2.72.  Invocation command line was

  $ ./../src/20240808-3-eb4c8bbbd6.clean/configure --disable-silent-rules --verbose --disable-shared --enable-static --prefix=/home/joe/repos/sigdb/sigdb/build/vcpkg_installed/x64-linux/debug '--bindir=${prefix}/../tools/libedit/debug/bin' '--sbindir=${prefix}/../tools/libedit/debug/sbin' '--libdir=${prefix}/lib' '--includedir=${prefix}/../include' '--datarootdir=${prefix}/share/libedit'

## --------- ##
## Platform. ##
## --------- ##

hostname = fedora
uname -m = x86_64
uname -r = 6.18.13-100.fc42.x86_64
uname -s = Linux
uname -v = #1 SMP PREEMPT_DYNAMIC Thu Feb 19 20:58:08 UTC 2026

/usr/bin/uname -p = unknown
/bin/uname -X     = unknown

/bin/arch              = x86_64
/usr/bin/arch -k       = unknown
/usr/convex/getsysinfo = unknown
/usr/bin/hostinfo      = unknown
/bin/machine           = unknown
/usr/bin/oslevel       = unknown
/bin/universe          = unknown

PATH: /home/joe/.codex/tmp/arg0/codex-arg09Bd4b8/
PATH: /home/joe/.cargo/bin/
PATH: /home/joe/.local/bin/
PATH: /home/joe/bin/
PATH: /usr/local/bin/
PATH: /usr/bin/
PATH: /home/joe/dev/flutter/bin/
PATH: /home/joe/.vscode/extensions/openai.chatgpt-26.304.20706-linux-x64/bin/linux-x86_64/
PATH: /home/joe/dev/flutter/bin/
PATH: /home/joe/repos/sigdb/vcpkg/downloads/tools/ninja-1.13.2-linux/
PATH: /bin/


## ----------- ##
## Core tests. ##
## ----------- ##

configure:2564: looking for aux files: config.guess config.sub ltmain.sh missing install-sh compile
configure:2577:  trying ./../src/20240808-3-eb4c8bbbd6.clean/
configure:2606:   ./../src/20240808-3-eb4c8bbbd6.clean/config.guess found
configure:2606:   ./../src/20240808-3-eb4c8bbbd6.clean/config.sub found
configure:2606:   ./../src/20240808-3-eb4c8bbbd6.clean/ltmain.sh found
configure:2606:   ./../src/20240808-3-eb4c8bbbd6.clean/missing found
configure:2588:   ./../src/20240808-3-eb4c8bbbd6.clean/install-sh found
configure:2606:   ./../src/20240808-3-eb4c8bbbd6.clean/compile found
configure:2792: checking for gcc
configure:2825: result: /usr/bin/cc
configure:3184: checking for C compiler version
configure:3193: /usr/bin/cc --version >&5
cc (GCC) 15.2.1 20260123 (Red Hat 15.2.1-7)
Copyright (C) 2025 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

configure:3204: $? = 0
configure:3193: /usr/bin/cc -v >&5
Using built-in specs.
COLLECT_GCC=/usr/bin/cc
COLLECT_LTO_WRAPPER=/usr/libexec/gcc/x86_64-redhat-linux/15/lto-wrapper
OFFLOAD_TARGET_NAMES=nvptx-none:amdgcn-amdhsa
OFFLOAD_TARGET_DEFAULT=1
Target: x86_64-redhat-linux
Configured with: ../configure --enable-bootstrap --enable-languages=c,c++,fortran,objc,obj-c++,ada,go,d,m2,cobol,lto --prefix=/usr --mandir=/usr/share/man --infodir=/usr/share/info --with-bugurl=https://bugzilla.redhat.com/ --enable-shared --enable-threads=posix --enable-checking=release --enable-multilib --with-system-zlib --enable-__cxa_atexit --disable-libunwind-exceptions --enable-gnu-unique-object --enable-linker-build-id --with-gcc-major-version-only --enable-libstdcxx-backtrace --with-libstdcxx-zoneinfo=/usr/share/zoneinfo --with-linker-hash-style=gnu --enable-plugin --enable-initfini-array --with-isl=/builddir/build/BUILD/gcc-15.2.1-build/gcc-15.2.1-20260123/obj-x86_64-redhat-linux/isl-install --enable-offload-targets=nvptx-none,amdgcn-amdhsa --enable-offload-defaulted --without-cuda-driver --enable-gnu-indirect-function --enable-cet --with-tune=generic --with-arch_32=i686 --build=x86_64-redhat-linux --with-build-config=bootstrap-lto --enable-link-serialization=1 --disable-libssp
Thread model: posix
Supported LTO compression algorithms: zlib zstd
gcc version 15.2.1 20260123 (Red Hat 15.2.1-7) (GCC) 
... rest of stderr output deleted ...
configure:3204: $? = 0
configure:3193: /usr/bin/cc -V >&5
cc: error: unrecognized command-line option '-V'
cc: fatal error: no input files
compilation terminated.
configure:3204: $? = 1
configure:3193: /usr/bin/cc -qversion >&5
cc: error: unrecognized command-line option '-qversion'; did you mean '--version'?
cc: fatal error: no input files
compilation terminated.
configure:3204: $? = 1
configure:3193: /usr/bin/cc -version >&5
cc: error: unrecognized command-line option '-version'
cc: fatal error: no input files
compilation terminated.
configure:3204: $? = 1
configure:3224: checking whether the C compiler works
configure:3246: /usr/bin/cc -fPIC -g  -L/home/joe/repos/sigdb/sigdb/build/vcpkg_installed/x64-linux/debug/lib -L/home/joe/repos/sigdb/sigdb/build/vcpkg_installed/x64-linux/debug/lib/manual-link conftest.c  >&5
configure:3250: $? = 0
configure:3301: result: yes
configure:3305: checking for C compiler default output file name
configure:3307: result: a.out
configure:3313: checking for suffix of executables
configure:3320: /usr/bin/cc -o conftest -fPIC -g  -L/home/joe/repos/sigdb/sigdb/build/vcpkg_installed/x64-linux/debug/lib -L/home/joe/repos/sigdb/sigdb/build/vcpkg_installed/x64-linux/debug/lib/manual-link conftest.c  >&5
configure:3324: $? = 0
configure:3348: result: 
configure:3372: checking whether we are cross compiling
configure:3380: /usr/bin/cc -o conftest -fPIC -g  -L/home/joe/repos/sigdb/sigdb/build/vcpkg_installed/x64-linux/debug/lib -L/home/joe/repos/sigdb/sigdb/build/vcpkg_installed/x64-linux/debug/lib/manual-link conftest.c  >&5
configure:3384: $? = 0
configure:3391: ./conftest
configure:3395: $? = 0
configure:3410: result: no
configure:3416: checking for suffix of object files
configure:3439: /usr/bin/cc -c -fPIC -g  conftest.c >&5
configure:3443: $? = 0
configure:3467: result: o
configure:3471: checking whether the compiler supports GNU C
configure:3491: /usr/bin/cc -c -fPIC -g  conftest.c >&5
configure:3491: $? = 0
configure:3503: result: yes
configure:3514: checking whether /usr/bin/cc accepts -g
configure:3535: /usr/bin/cc -c -g  conftest.c >&5
configure:3535: $? = 0
configure:3582: result: yes
configure:3602: checking for /usr/bin/cc option to enable C11 features
configure:3617: /usr/bin/cc  -c -fPIC -g  conftest.c >&5
configure:3617: $? = 0
configure:3636: result: none needed
configure:3760: checking whether /usr/bin/cc understands -c and -o together
configure:3783: /usr/bin/cc -c conftest.c -o conftest2.o
configure:3786: $? = 0
configure:3783: /usr/bin/cc -c conftest.c -o conftest2.o
configure:3786: $? = 0
configure:3799: result: yes
configure:3821: checking for stdio.h
configure:3821: /usr/bin/cc -c -fPIC -g  conftest.c >&5
configure:3821: $? = 0
configure:3821: result: yes
configure:3821: checking for stdlib.h
configure:3821: /usr/bin/cc -c -fPIC -g  conftest.c >&5
configure:3821: $? = 0
configure:3821: result: yes
configure:3821: checking for string.h
configure:3821: /usr/bin/cc -c -fPIC -g  conftest.c >&5
configure:3821: $? = 0
configure:3821: result: yes
configure:3821: checking for inttypes.h
configure:3821: /usr/bin/cc -c -fPIC -g  conftest.c >&5
configure:3821: $? = 0
configure:3821: result: yes
configure:3821: checking for stdint.h
configure:3821: /usr/bin/cc -c -fPIC -g  conftest.c >&5
configure:3821: $? = 0
configure:3821: result: yes
configure:3821: checking for strings.h
configure:3821: /usr/bin/cc -c -fPIC -g  conftest.c >&5
configure:3821: $? = 0
configure:3821: result: yes
configure:3821: checking for sys/stat.h
configure:3821: /usr/bin/cc -c -fPIC -g  conftest.c >&5
configure:3821: $? = 0
configure:3821: result: yes
configure:3821: checking for sys/types.h
configure:3821: /usr/bin/cc -c -fPIC -g  conftest.c >&5
configure:3821: $? = 0
configure:3821: result: yes
configure:3821: checking for unistd.h
configure:3821: /usr/bin/cc -c -fPIC -g  conftest.c >&5
configure:3821: $? = 0
configure:3821: result: yes
configure:3821: checking for wchar.h
configure:3821: /usr/bin/cc -c -fPIC -g  conftest.c >&5
configure:3821: $? = 0
configure:3821: result: yes
configure:3821: checking for minix/config.h
configure:3821: /usr/bin/cc -c -fPIC -g  conftest.c >&5
conftest.c:47:10: fatal error: minix/config.h: No such file or directory
   47 | #include <minix/config.h>
      |          ^~~~~~~~~~~~~~~~
compilation terminated.
configure:3821: $? = 1
configure: failed program was:
| /* confdefs.h */
| #define PACKAGE_NAME "libedit"
| #define PACKAGE_TARNAME "libedit-20260312"
| #define PACKAGE_VERSION "3.1"
| #define PACKAGE_STRING "libedit 3.1"
| #define PACKAGE_BUGREPORT ""
| #define PACKAGE_URL ""
| #define HAVE_STDIO_H 1
| #define HAVE_STDLIB_H 1
| #define HAVE_STRING_H 1
| #define HAVE_INTTYPES_H 1
| #define HAVE_STDINT_H 1
| #define HAVE_STRINGS_H 1
| #define HAVE_SYS_STAT_H 1
| #define HAVE_SYS_TYPES_H 1
| #define HAVE_UNISTD_H 1
| #define HAVE_WCHAR_H 1
| /* end confdefs.h.  */
| #include <stddef.h>
| #ifdef HAVE_STDIO_H
| # include <stdio.h>
| #endif
| #ifdef HAVE_STDLIB_H
| # include <stdlib.h>
| #endif
| #ifdef HAVE_STRING_H
| # include <string.h>
| #endif
| #ifdef HAVE_INTTYPES_H
| # include <inttypes.h>
| #endif
| #ifdef HAVE_STDINT_H
| # include <stdint.h>
| #endif
| #ifdef HAVE_STRINGS_H
| # include <strings.h>
| #endif
| #ifdef HAVE_SYS_TYPES_H
| # include <sys/types.h>
| #endif
| #ifdef HAVE_SYS_STAT_H
| # include <sys/stat.h>
| #endif
| #ifdef HAVE_UNISTD_H
| # include <unistd.h>
| #endif
| #include <minix/config.h>
configure:3821: result: no
configure:3821: checking for vfork.h
configure:3821: /usr/bin/cc -c -fPIC -g  conftest.c >&5
conftest.c:47:10: fatal error: vfork.h: No such file or directory
   47 | #include <vfork.h>
      |          ^~~~~~~~~
compilation terminated.
configure:3821: $? = 1
configure: failed program was:
| /* confdefs.h */
| #define PACKAGE_NAME "libedit"
| #define PACKAGE_TARNAME "libedit-20260312"
| #define PACKAGE_VERSION "3.1"
| #define PACKAGE_STRING "libedit 3.1"
| #define PACKAGE_BUGREPORT ""
| #define PACKAGE_URL ""
| #define HAVE_STDIO_H 1
| #define HAVE_STDLIB_H 1
| #define HAVE_STRING_H 1
| #define HAVE_INTTYPES_H 1
| #define HAVE_STDINT_H 1
| #define HAVE_STRINGS_H 1
| #define HAVE_SYS_STAT_H 1
| #define HAVE_SYS_TYPES_H 1
| #define HAVE_UNISTD_H 1
| #define HAVE_WCHAR_H 1
| /* end confdefs.h.  */
| #include <stddef.h>
| #ifdef HAVE_STDIO_H
| # include <stdio.h>
| #endif
| #ifdef HAVE_STDLIB_H
| # include <stdlib.h>
| #endif
| #ifdef HAVE_STRING_H
| # include <string.h>
| #endif
| #ifdef HAVE_INTTYPES_H
| # include <inttypes.h>
| #endif
| #ifdef HAVE_STDINT_H
| # include <stdint.h>
| #endif
| #ifdef HAVE_STRINGS_H
| # include <strings.h>
| #endif
| #ifdef HAVE_SYS_TYPES_H
| # include <sys/types.h>
| #endif
| #ifdef HAVE_SYS_STAT_H
| # include <sys/stat.h>
| #endif
| #ifdef HAVE_UNISTD_H
| # include <unistd.h>
| #endif
| #include <vfork.h>
configure:3821: result: no
configure:3852: checking whether it is safe to define __EXTENSIONS__
configure:3871: /usr/bin/cc -c -fPIC -g  conftest.c >&5
configure:3871: $? = 0
configure:3881: result: yes
configure:3884: checking whether _XOPEN_SOURCE should be defined
configure:3906: /usr/bin/cc -c -fPIC -g  conftest.c >&5
configure:3906: $? = 0
configure:3935: result: no
configure:4012: checking for a BSD-compatible install
configure:4086: result: /usr/bin/install -c
configure:4097: checking whether sleep supports fractional seconds
configure:4113: result: yes
configure:4116: checking filesystem timestamp resolution
configure:4251: result: 0.01
configure:4256: checking whether build environment is sane
configure:4297: result: yes
configure:4464: checking for a race-free mkdir -p
configure:4507: result: /usr/bin/mkdir -p
configure:4514: checking for gawk
configure:4535: found /usr/bin/gawk
configure:4547: result: gawk
configure:4558: checking whether make sets $(MAKE)
configure:4582: result: yes
configure:4604: checking whether make supports the include directive
configure:4619: make -f confmf.GNU && cat confinc.out
this is the am__doit target
configure:4622: $? = 0
configure:4641: result: yes (GNU style)
configure:4672: checking whether make supports nested variables
configure:4691: result: yes
configure:4705: checking xargs -n works
configure:4721: result: yes
configure:4802: checking dependency style of /usr/bin/cc
configure:4915: result: gcc3
configure:4981: checking build system type
configure:4997: result: x86_64-pc-linux-gnu
configure:5017: checking host system type
configure:5032: result: x86_64-pc-linux-gnu
configure:5073: checking how to print strings
configure:5100: result: printf
configure:5121: checking for a sed that does not truncate output
configure:5193: result: /usr/bin/sed
configure:5211: checking for grep that handles long lines and -e
configure:5277: result: /usr/bin/grep
configure:5282: checking for egrep
configure:5352: result: /usr/bin/grep -E
configure:5359: checking for fgrep
configure:5429: result: /usr/bin/grep -F
configure:5466: checking for ld used by /usr/bin/cc
configure:5535: result: /usr/bin/ld
configure:5542: checking if the linker (/usr/bin/ld) is GNU ld
configure:5559: result: yes
configure:5571: checking for BSD- or MS-compatible name lister (nm)
configure:5627: result: /usr/bin/nm
configure:5769: checking the name lister (/usr/bin/nm) interface
configure:5777: /usr/bin/cc -c -fPIC -g  conftest.c >&5
configure:5780: /usr/bin/nm "conftest.o"
configure:5783: output
0000000000000000 B some_variable
configure:5791: result: BSD nm
configure:5794: checking whether ln -s works
configure:5798: result: yes
configure:5806: checking the maximum length of command line arguments
configure:5939: result: 1572864
configure:5987: checking how to convert x86_64-pc-linux-gnu file names to x86_64-pc-linux-gnu format
configure:6029: result: func_convert_file_noop
configure:6036: checking how to convert x86_64-pc-linux-gnu file names to toolchain format
configure:6058: result: func_convert_file_noop
configure:6065: checking for /usr/bin/ld option to reload object files
configure:6074: result: -r
configure:6107: checking for file
configure:6128: found /usr/bin/file
configure:6141: result: file
configure:6204: checking for objdump
configure:6237: result: /usr/bin/objdump
configure:6269: checking how to recognize dependent libraries
configure:6478: result: pass_all
configure:6569: checking for dlltool
configure:6605: result: no
configure:6635: checking how to associate runtime and link libraries
configure:6664: result: printf %s\n
configure:6724: checking for ranlib
configure:6757: result: /usr/bin/ranlib
configure:6920: checking for archiver @FILE support
configure:6938: /usr/bin/cc -c -fPIC -g  conftest.c >&5
configure:6938: $? = 0
configure:6942: /usr/bin/ar cr libconftest.a @conftest.lst >&5
configure:6945: $? = 0
configure:6950: /usr/bin/ar cr libconftest.a @conftest.lst >&5
/usr/bin/ar: conftest.o: No such file or directory
configure:6953: $? = 1
configure:6966: result: @
configure:7030: checking for strip
configure:7063: result: /usr/bin/strip
configure:7166: checking command to parse /usr/bin/nm output from /usr/bin/cc object
configure:7320: /usr/bin/cc -c -fPIC -g  conftest.c >&5
configure:7323: $? = 0
configure:7327: /usr/bin/nm conftest.o | /usr/bin/sed -n -e 's/^.*[	 ]\([ABCDGIRSTW][ABCDGIRSTW]*\)[	 ][	 ]*\([_A-Za-z][_A-Za-z0-9]*\)$/\1 \2 \2/p' | /usr/bin/sed '/ __gnu_lto/d' > conftest.nm
configure:7393: /usr/bin/cc -o conftest -fPIC -g  -L/home/joe/repos/sigdb/sigdb/build/vcpkg_installed/x64-linux/debug/lib -L/home/joe/repos/sigdb/sigdb/build/vcpkg_installed/x64-linux/debug/lib/manual-link conftest.c conftstm.o >&5
configure:7396: $? = 0
configure:7435: result: ok
configure:7482: checking for sysroot
configure:7516: result: no
configure:7523: checking for a working dd
configure:7568: result: /usr/bin/dd
configure:7572: checking how to truncate binary pipes
configure:7589: result: /usr/bin/dd bs=4096 count=1
configure:7726: /usr/bin/cc -c -fPIC -g  conftest.c >&5
configure:7729: $? = 0
configure:7929: checking for mt
configure:7965: result: no
configure:7985: checking if : is a manifest tool
configure:7992: : '-?'
configure:8001: result: no
configure:8794: checking for dlfcn.h
configure:8794: /usr/bin/cc -c -fPIC -g  conftest.c >&5
configure:8794: $? = 0
configure:8794: result: yes
configure:9097: checking for objdir
configure:9114: result: .libs
configure:9380: checking if /usr/bin/cc supports -fno-rtti -fno-exceptions
configure:9399: /usr/bin/cc -c -fPIC -g  -fno-rtti -fno-exceptions conftest.c >&5
cc1: warning: command-line option '-fno-rtti' is valid for C++/D/ObjC++ but not for C
configure:9403: $? = 0
configure:9417: result: no
configure:9790: checking for /usr/bin/cc option to produce PIC
configure:9799: result: -fPIC -DPIC
configure:9807: checking if /usr/bin/cc PIC flag -fPIC -DPIC works
configure:9826: /usr/bin/cc -c -fPIC -g  -fPIC -DPIC -DPIC conftest.c >&5
configure:9830: $? = 0
configure:9844: result: yes
configure:9873: checking if /usr/bin/cc static flag -static works
configure:9903: result: no
configure:9918: checking if /usr/bin/cc supports -c -o file.o
configure:9940: /usr/bin/cc -c -fPIC -g  -o out/conftest2.o conftest.c >&5
configure:9944: $? = 0
configure:9967: result: yes
configure:9975: checking if /usr/bin/cc supports -c -o file.o
configure:10024: result: yes
configure:10057: checking whether the /usr/bin/cc linker (/usr/bin/ld -m elf_x86_64) supports shared libraries
configure:11341: result: yes
configure:11583: checking dynamic linker characteristics
configure:12202: /usr/bin/cc -o conftest -fPIC -g  -L/home/joe/repos/sigdb/sigdb/build/vcpkg_installed/x64-linux/debug/lib -L/home/joe/repos/sigdb/sigdb/build/vcpkg_installed/x64-linux/debug/lib/manual-link -Wl,-rpath -Wl,/foo conftest.c  >&5
configure:12202: $? = 0
configure:12970: result: GNU/Linux ld.so
configure:13092: checking how to hardcode library paths into programs
configure:13117: result: immediate
configure:13717: checking whether stripping libraries is possible
configure:13726: result: yes
configure:13768: checking if libtool supports shared libraries
configure:13770: result: yes
configure:13773: checking whether to build shared libraries
configure:13798: result: no
configure:13801: checking whether to build static libraries
configure:13805: result: yes
configure:13905: checking for gcc
configure:13938: result: /usr/bin/cc
configure:14297: checking for C compiler version
configure:14306: /usr/bin/cc --version >&5
cc (GCC) 15.2.1 20260123 (Red Hat 15.2.1-7)
Copyright (C) 2025 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

configure:14317: $? = 0
configure:14306: /usr/bin/cc -v >&5
Using built-in specs.
COLLECT_GCC=/usr/bin/cc
COLLECT_LTO_WRAPPER=/usr/libexec/gcc/x86_64-redhat-linux/15/lto-wrapper
OFFLOAD_TARGET_NAMES=nvptx-none:amdgcn-amdhsa
OFFLOAD_TARGET_DEFAULT=1
Target: x86_64-redhat-linux
Configured with: ../configure --enable-bootstrap --enable-languages=c,c++,fortran,objc,obj-c++,ada,go,d,m2,cobol,lto --prefix=/usr --mandir=/usr/share/man --infodir=/usr/share/info --with-bugurl=https://bugzilla.redhat.com/ --enable-shared --enable-threads=posix --enable-checking=release --enable-multilib --with-system-zlib --enable-__cxa_atexit --disable-libunwind-exceptions --enable-gnu-unique-object --enable-linker-build-id --with-gcc-major-version-only --enable-libstdcxx-backtrace --with-libstdcxx-zoneinfo=/usr/share/zoneinfo --with-linker-hash-style=gnu --enable-plugin --enable-initfini-array --with-isl=/builddir/build/BUILD/gcc-15.2.1-build/gcc-15.2.1-20260123/obj-x86_64-redhat-linux/isl-install --enable-offload-targets=nvptx-none,amdgcn-amdhsa --enable-offload-defaulted --without-cuda-driver --enable-gnu-indirect-function --enable-cet --with-tune=generic --with-arch_32=i686 --build=x86_64-redhat-linux --with-build-config=bootstrap-lto --enable-link-serialization=1 --disable-libssp
Thread model: posix
Supported LTO compression algorithms: zlib zstd
gcc version 15.2.1 20260123 (Red Hat 15.2.1-7) (GCC) 
... rest of stderr output deleted ...
configure:14317: $? = 0
configure:14306: /usr/bin/cc -V >&5
cc: error: unrecognized command-line option '-V'
cc: fatal error: no input files
compilation terminated.
configure:14317: $? = 1
configure:14306: /usr/bin/cc -qversion >&5
cc: error: unrecognized command-line option '-qversion'; did you mean '--version'?
cc: fatal error: no input files
compilation terminated.
configure:14317: $? = 1
configure:14306: /usr/bin/cc -version >&5
cc: error: unrecognized command-line option '-version'
cc: fatal error: no input files
compilation terminated.
configure:14317: $? = 1
configure:14321: checking whether the compiler supports GNU C
configure:14353: result: yes
configure:14364: checking whether /usr/bin/cc accepts -g
configure:14432: result: yes
configure:14452: checking for /usr/bin/cc option to enable C11 features
configure:14486: result: none needed
configure:14610: checking whether /usr/bin/cc understands -c and -o together
configure:14649: result: yes
configure:14666: checking whether ln -s works
configure:14670: result: yes
configure:14681: checking for gawk
configure:14714: result: gawk
configure:14732: checking for nroff
configure:14755: found /usr/bin/nroff
configure:14768: result: /usr/bin/nroff
configure:14786: checking for tgetent in -lncurses
configure:14815: /usr/bin/cc -o conftest -fPIC -g  -L/home/joe/repos/sigdb/sigdb/build/vcpkg_installed/x64-linux/debug/lib -L/home/joe/repos/sigdb/sigdb/build/vcpkg_installed/x64-linux/debug/lib/manual-link conftest.c -lncurses   >&5
/usr/bin/ld: cannot find -lncurses: No such file or directory
collect2: error: ld returned 1 exit status
configure:14815: $? = 1
configure: failed program was:
| /* confdefs.h */
| #define PACKAGE_NAME "libedit"
| #define PACKAGE_TARNAME "libedit-20260312"
| #define PACKAGE_VERSION "3.1"
| #define PACKAGE_STRING "libedit 3.1"
| #define PACKAGE_BUGREPORT ""
| #define PACKAGE_URL ""
| #define HAVE_STDIO_H 1
| #define HAVE_STDLIB_H 1
| #define HAVE_STRING_H 1
| #define HAVE_INTTYPES_H 1
| #define HAVE_STDINT_H 1
| #define HAVE_STRINGS_H 1
| #define HAVE_SYS_STAT_H 1
| #define HAVE_SYS_TYPES_H 1
| #define HAVE_UNISTD_H 1
| #define HAVE_WCHAR_H 1
| #define STDC_HEADERS 1
| #define _ALL_SOURCE 1
| #define _DARWIN_C_SOURCE 1
| #define _GNU_SOURCE 1
| #define _HPUX_ALT_XOPEN_SOCKET_API 1
| #define _NETBSD_SOURCE 1
| #define _OPENBSD_SOURCE 1
| #define _POSIX_PTHREAD_SEMANTICS 1
| #define __STDC_WANT_IEC_60559_ATTRIBS_EXT__ 1
| #define __STDC_WANT_IEC_60559_BFP_EXT__ 1
| #define __STDC_WANT_IEC_60559_DFP_EXT__ 1
| #define __STDC_WANT_IEC_60559_EXT__ 1
| #define __STDC_WANT_IEC_60559_FUNCS_EXT__ 1
| #define __STDC_WANT_IEC_60559_TYPES_EXT__ 1
| #define __STDC_WANT_LIB_EXT2__ 1
| #define __STDC_WANT_MATH_SPEC_FUNCS__ 1
| #define _TANDEM_SOURCE 1
| #define __EXTENSIONS__ 1
| #define PACKAGE "libedit-20260312"
| #define VERSION "3.1"
| #define HAVE_DLFCN_H 1
| #define LT_OBJDIR ".libs/"
| /* end confdefs.h.  */
| 
| /* Override any GCC internal prototype to avoid an error.
|    Use char because int might match the return type of a GCC
|    builtin and then its argument prototype would still apply.
|    The 'extern "C"' is for builds by C++ compilers;
|    although this is not generally supported in C code supporting it here
|    has little cost and some practical benefit (sr 110532).  */
| #ifdef __cplusplus
| extern "C"
| #endif
| char tgetent (void);
| int
| main (void)
| {
| return tgetent ();
|   ;
|   return 0;
| }
configure:14827: result: no
configure:14836: checking for tgetent in -lcurses
configure:14865: /usr/bin/cc -o conftest -fPIC -g  -L/home/joe/repos/sigdb/sigdb/build/vcpkg_installed/x64-linux/debug/lib -L/home/joe/repos/sigdb/sigdb/build/vcpkg_installed/x64-linux/debug/lib/manual-link conftest.c -lcurses   >&5
/usr/bin/ld: cannot find -lcurses: No such file or directory
collect2: error: ld returned 1 exit status
configure:14865: $? = 1
configure: failed program was:
| /* confdefs.h */
| #define PACKAGE_NAME "libedit"
| #define PACKAGE_TARNAME "libedit-20260312"
| #define PACKAGE_VERSION "3.1"
| #define PACKAGE_STRING "libedit 3.1"
| #define PACKAGE_BUGREPORT ""
| #define PACKAGE_URL ""
| #define HAVE_STDIO_H 1
| #define HAVE_STDLIB_H 1
| #define HAVE_STRING_H 1
| #define HAVE_INTTYPES_H 1
| #define HAVE_STDINT_H 1
| #define HAVE_STRINGS_H 1
| #define HAVE_SYS_STAT_H 1
| #define HAVE_SYS_TYPES_H 1
| #define HAVE_UNISTD_H 1
| #define HAVE_WCHAR_H 1
| #define STDC_HEADERS 1
| #define _ALL_SOURCE 1
| #define _DARWIN_C_SOURCE 1
| #define _GNU_SOURCE 1
| #define _HPUX_ALT_XOPEN_SOCKET_API 1
| #define _NETBSD_SOURCE 1
| #define _OPENBSD_SOURCE 1
| #define _POSIX_PTHREAD_SEMANTICS 1
| #define __STDC_WANT_IEC_60559_ATTRIBS_EXT__ 1
| #define __STDC_WANT_IEC_60559_BFP_EXT__ 1
| #define __STDC_WANT_IEC_60559_DFP_EXT__ 1
| #define __STDC_WANT_IEC_60559_EXT__ 1
| #define __STDC_WANT_IEC_60559_FUNCS_EXT__ 1
| #define __STDC_WANT_IEC_60559_TYPES_EXT__ 1
| #define __STDC_WANT_LIB_EXT2__ 1
| #define __STDC_WANT_MATH_SPEC_FUNCS__ 1
| #define _TANDEM_SOURCE 1
| #define __EXTENSIONS__ 1
| #define PACKAGE "libedit-20260312"
| #define VERSION "3.1"
| #define HAVE_DLFCN_H 1
| #define LT_OBJDIR ".libs/"
| /* end confdefs.h.  */
| 
| /* Override any GCC internal prototype to avoid an error.
|    Use char because int might match the return type of a GCC
|    builtin and then its argument prototype would still apply.
|    The 'extern "C"' is for builds by C++ compilers;
|    although this is not generally supported in C code supporting it here
|    has little cost and some practical benefit (sr 110532).  */
| #ifdef __cplusplus
| extern "C"
| #endif
| char tgetent (void);
| int
| main (void)
| {
| return tgetent ();
|   ;
|   return 0;
| }
configure:14877: result: no
configure:14886: checking for tgetent in -ltermcap
configure:14915: /usr/bin/cc -o conftest -fPIC -g  -L/home/joe/repos/sigdb/sigdb/build/vcpkg_installed/x64-linux/debug/lib -L/home/joe/repos/sigdb/sigdb/build/vcpkg_installed/x64-linux/debug/lib/manual-link conftest.c -ltermcap   >&5
/usr/bin/ld: cannot find -ltermcap: No such file or directory
collect2: error: ld returned 1 exit status
configure:14915: $? = 1
configure: failed program was:
| /* confdefs.h */
| #define PACKAGE_NAME "libedit"
| #define PACKAGE_TARNAME "libedit-20260312"
| #define PACKAGE_VERSION "3.1"
| #define PACKAGE_STRING "libedit 3.1"
| #define PACKAGE_BUGREPORT ""
| #define PACKAGE_URL ""
| #define HAVE_STDIO_H 1
| #define HAVE_STDLIB_H 1
| #define HAVE_STRING_H 1
| #define HAVE_INTTYPES_H 1
| #define HAVE_STDINT_H 1
| #define HAVE_STRINGS_H 1
| #define HAVE_SYS_STAT_H 1
| #define HAVE_SYS_TYPES_H 1
| #define HAVE_UNISTD_H 1
| #define HAVE_WCHAR_H 1
| #define STDC_HEADERS 1
| #define _ALL_SOURCE 1
| #define _DARWIN_C_SOURCE 1
| #define _GNU_SOURCE 1
| #define _HPUX_ALT_XOPEN_SOCKET_API 1
| #define _NETBSD_SOURCE 1
| #define _OPENBSD_SOURCE 1
| #define _POSIX_PTHREAD_SEMANTICS 1
| #define __STDC_WANT_IEC_60559_ATTRIBS_EXT__ 1
| #define __STDC_WANT_IEC_60559_BFP_EXT__ 1
| #define __STDC_WANT_IEC_60559_DFP_EXT__ 1
| #define __STDC_WANT_IEC_60559_EXT__ 1
| #define __STDC_WANT_IEC_60559_FUNCS_EXT__ 1
| #define __STDC_WANT_IEC_60559_TYPES_EXT__ 1
| #define __STDC_WANT_LIB_EXT2__ 1
| #define __STDC_WANT_MATH_SPEC_FUNCS__ 1
| #define _TANDEM_SOURCE 1
| #define __EXTENSIONS__ 1
| #define PACKAGE "libedit-20260312"
| #define VERSION "3.1"
| #define HAVE_DLFCN_H 1
| #define LT_OBJDIR ".libs/"
| /* end confdefs.h.  */
| 
| /* Override any GCC internal prototype to avoid an error.
|    Use char because int might match the return type of a GCC
|    builtin and then its argument prototype would still apply.
|    The 'extern "C"' is for builds by C++ compilers;
|    although this is not generally supported in C code supporting it here
|    has little cost and some practical benefit (sr 110532).  */
| #ifdef __cplusplus
| extern "C"
| #endif
| char tgetent (void);
| int
| main (void)
| {
| return tgetent ();
|   ;
|   return 0;
| }
configure:14927: result: no
configure:14936: checking for tgetent in -ltinfo
configure:14965: /usr/bin/cc -o conftest -fPIC -g  -L/home/joe/repos/sigdb/sigdb/build/vcpkg_installed/x64-linux/debug/lib -L/home/joe/repos/sigdb/sigdb/build/vcpkg_installed/x64-linux/debug/lib/manual-link conftest.c -ltinfo   >&5
/usr/bin/ld: cannot find -ltinfo: No such file or directory
collect2: error: ld returned 1 exit status
configure:14965: $? = 1
configure: failed program was:
| /* confdefs.h */
| #define PACKAGE_NAME "libedit"
| #define PACKAGE_TARNAME "libedit-20260312"
| #define PACKAGE_VERSION "3.1"
| #define PACKAGE_STRING "libedit 3.1"
| #define PACKAGE_BUGREPORT ""
| #define PACKAGE_URL ""
| #define HAVE_STDIO_H 1
| #define HAVE_STDLIB_H 1
| #define HAVE_STRING_H 1
| #define HAVE_INTTYPES_H 1
| #define HAVE_STDINT_H 1
| #define HAVE_STRINGS_H 1
| #define HAVE_SYS_STAT_H 1
| #define HAVE_SYS_TYPES_H 1
| #define HAVE_UNISTD_H 1
| #define HAVE_WCHAR_H 1
| #define STDC_HEADERS 1
| #define _ALL_SOURCE 1
| #define _DARWIN_C_SOURCE 1
| #define _GNU_SOURCE 1
| #define _HPUX_ALT_XOPEN_SOCKET_API 1
| #define _NETBSD_SOURCE 1
| #define _OPENBSD_SOURCE 1
| #define _POSIX_PTHREAD_SEMANTICS 1
| #define __STDC_WANT_IEC_60559_ATTRIBS_EXT__ 1
| #define __STDC_WANT_IEC_60559_BFP_EXT__ 1
| #define __STDC_WANT_IEC_60559_DFP_EXT__ 1
| #define __STDC_WANT_IEC_60559_EXT__ 1
| #define __STDC_WANT_IEC_60559_FUNCS_EXT__ 1
| #define __STDC_WANT_IEC_60559_TYPES_EXT__ 1
| #define __STDC_WANT_LIB_EXT2__ 1
| #define __STDC_WANT_MATH_SPEC_FUNCS__ 1
| #define _TANDEM_SOURCE 1
| #define __EXTENSIONS__ 1
| #define PACKAGE "libedit-20260312"
| #define VERSION "3.1"
| #define HAVE_DLFCN_H 1
| #define LT_OBJDIR ".libs/"
| /* end confdefs.h.  */
| 
| /* Override any GCC internal prototype to avoid an error.
|    Use char because int might match the return type of a GCC
|    builtin and then its argument prototype would still apply.
|    The 'extern "C"' is for builds by C++ compilers;
|    although this is not generally supported in C code supporting it here
|    has little cost and some practical benefit (sr 110532).  */
| #ifdef __cplusplus
| extern "C"
| #endif
| char tgetent (void);
| int
| main (void)
| {
| return tgetent ();
|   ;
|   return 0;
| }
configure:14977: result: no
configure:14986: error: libncurses, libcurses, libtermcap or libtinfo is required!

## ---------------- ##
## Cache variables. ##
## ---------------- ##

ac_cv_build=x86_64-pc-linux-gnu
ac_cv_c_compiler_gnu=yes
ac_cv_env_CC_set=set
ac_cv_env_CC_value=/usr/bin/cc
ac_cv_env_CFLAGS_set=set
ac_cv_env_CFLAGS_value='-fPIC -g'
ac_cv_env_CPPFLAGS_set=
ac_cv_env_CPPFLAGS_value=
ac_cv_env_LDFLAGS_set=set
ac_cv_env_LDFLAGS_value='-L/home/joe/repos/sigdb/sigdb/build/vcpkg_installed/x64-linux/debug/lib -L/home/joe/repos/sigdb/sigdb/build/vcpkg_installed/x64-linux/debug/lib/manual-link'
ac_cv_env_LIBS_set=
ac_cv_env_LIBS_value=
ac_cv_env_LT_SYS_LIBRARY_PATH_set=
ac_cv_env_LT_SYS_LIBRARY_PATH_value=
ac_cv_env_build_alias_set=
ac_cv_env_build_alias_value=
ac_cv_env_host_alias_set=
ac_cv_env_host_alias_value=
ac_cv_env_target_alias_set=
ac_cv_env_target_alias_value=
ac_cv_header_dlfcn_h=yes
ac_cv_header_inttypes_h=yes
ac_cv_header_minix_config_h=no
ac_cv_header_stdint_h=yes
ac_cv_header_stdio_h=yes
ac_cv_header_stdlib_h=yes
ac_cv_header_string_h=yes
ac_cv_header_strings_h=yes
ac_cv_header_sys_stat_h=yes
ac_cv_header_sys_types_h=yes
ac_cv_header_unistd_h=yes
ac_cv_header_vfork_h=no
ac_cv_header_wchar_h=yes
ac_cv_host=x86_64-pc-linux-gnu
ac_cv_lib_curses_tgetent=no
ac_cv_lib_ncurses_tgetent=no
ac_cv_lib_termcap_tgetent=no
ac_cv_lib_tinfo_tgetent=no
ac_cv_objext=o
ac_cv_path_EGREP='/usr/bin/grep -E'
ac_cv_path_EGREP_TRADITIONAL='/usr/bin/grep -E'
ac_cv_path_FGREP='/usr/bin/grep -F'
ac_cv_path_GREP=/usr/bin/grep
ac_cv_path_NROFF=/usr/bin/nroff
ac_cv_path_SED=/usr/bin/sed
ac_cv_path_install='/usr/bin/install -c'
ac_cv_path_lt_DD=/usr/bin/dd
ac_cv_path_mkdir=/usr/bin/mkdir
ac_cv_prog_AWK=gawk
ac_cv_prog_FILECMD=file
ac_cv_prog_ac_ct_CC=/usr/bin/cc
ac_cv_prog_ac_ct_OBJDUMP=/usr/bin/objdump
ac_cv_prog_ac_ct_RANLIB=/usr/bin/ranlib
ac_cv_prog_ac_ct_STRIP=/usr/bin/strip
ac_cv_prog_cc_c11=
ac_cv_prog_cc_g=yes
ac_cv_prog_cc_stdc=
ac_cv_prog_make_make_set=yes
ac_cv_safe_to_define___extensions__=yes
ac_cv_should_define__xopen_source=no
am_cv_CC_dependencies_compiler_type=gcc3
am_cv_filesystem_timestamp_resolution=0.01
am_cv_make_support_nested_variables=yes
am_cv_prog_cc_c_o=yes
am_cv_sleep_fractional_seconds=yes
am_cv_xargs_n_works=yes
lt_cv_ar_at_file=@
lt_cv_deplibs_check_method=pass_all
lt_cv_file_magic_cmd='$MAGIC_CMD'
lt_cv_file_magic_test_file=
lt_cv_ld_reload_flag=-r
lt_cv_nm_interface='BSD nm'
lt_cv_objdir=.libs
lt_cv_path_LD=/usr/bin/ld
lt_cv_path_NM=/usr/bin/nm
lt_cv_path_manifest_tool=no
lt_cv_prog_compiler_c_o=yes
lt_cv_prog_compiler_pic='-fPIC -DPIC'
lt_cv_prog_compiler_pic_works=yes
lt_cv_prog_compiler_rtti_exceptions=no
lt_cv_prog_compiler_static_works=no
lt_cv_prog_gnu_ld=yes
lt_cv_sharedlib_from_linklib_cmd='printf %s\n'
lt_cv_shlibpath_overrides_runpath=yes
lt_cv_sys_global_symbol_pipe='/usr/bin/sed -n -e '\''s/^.*[	 ]\([ABCDGIRSTW][ABCDGIRSTW]*\)[	 ][	 ]*\([_A-Za-z][_A-Za-z0-9]*\)$/\1 \2 \2/p'\'' | /usr/bin/sed '\''/ __gnu_lto/d'\'''
lt_cv_sys_global_symbol_to_c_name_address='/usr/bin/sed -n -e '\''s/^: \(.*\) .*$/  {"\1", (void *) 0},/p'\'' -e '\''s/^[ABCDGIRSTW][ABCDGIRSTW]* .* \(.*\)$/  {"\1", (void *) \&\1},/p'\'''
lt_cv_sys_global_symbol_to_c_name_address_lib_prefix='/usr/bin/sed -n -e '\''s/^: \(.*\) .*$/  {"\1", (void *) 0},/p'\'' -e '\''s/^[ABCDGIRSTW][ABCDGIRSTW]* .* \(lib.*\)$/  {"\1", (void *) \&\1},/p'\'' -e '\''s/^[ABCDGIRSTW][ABCDGIRSTW]* .* \(.*\)$/  {"lib\1", (void *) \&\1},/p'\'''
lt_cv_sys_global_symbol_to_cdecl='/usr/bin/sed -n -e '\''s/^T .* \(.*\)$/extern int \1();/p'\'' -e '\''s/^[ABCDGIRSTW][ABCDGIRSTW]* .* \(.*\)$/extern char \1;/p'\'''
lt_cv_sys_global_symbol_to_import=
lt_cv_sys_max_cmd_len=1572864
lt_cv_to_host_file_cmd=func_convert_file_noop
lt_cv_to_tool_file_cmd=func_convert_file_noop
lt_cv_truncate_bin='/usr/bin/dd bs=4096 count=1'

## ----------------- ##
## Output variables. ##
## ----------------- ##

ACLOCAL='${SHELL} '\''/home/joe/repos/sigdb/vcpkg/buildtrees/libedit/src/20240808-3-eb4c8bbbd6.clean/missing'\'' aclocal-1.17'
AMDEPBACKSLASH='\'
AMDEP_FALSE='#'
AMDEP_TRUE=''
AMTAR='$${TAR-tar}'
AM_BACKSLASH='\'
AM_DEFAULT_V=''
AM_DEFAULT_VERBOSITY='0'
AM_V=''
AR='/usr/bin/ar'
AUTOCONF='${SHELL} '\''/home/joe/repos/sigdb/vcpkg/buildtrees/libedit/src/20240808-3-eb4c8bbbd6.clean/missing'\'' autoconf'
AUTOHEADER='${SHELL} '\''/home/joe/repos/sigdb/vcpkg/buildtrees/libedit/src/20240808-3-eb4c8bbbd6.clean/missing'\'' autoheader'
AUTOMAKE='${SHELL} '\''/home/joe/repos/sigdb/vcpkg/buildtrees/libedit/src/20240808-3-eb4c8bbbd6.clean/missing'\'' automake-1.17'
AWK='gawk'
CC='/usr/bin/cc'
CCDEPMODE='depmode=gcc3'
CFLAGS='-fPIC -g'
CPPFLAGS=''
CSCOPE='cscope'
CTAGS='ctags'
CYGPATH_W='echo'
DEFS=''
DEPDIR='.deps'
DLLTOOL='false'
DSYMUTIL=''
DUMPBIN=''
ECHO_C=''
ECHO_N='-n'
ECHO_T=''
EGREP='/usr/bin/grep -E'
ENABLE_EXAMPLES_FALSE=''
ENABLE_EXAMPLES_TRUE=''
ETAGS='etags'
EXEEXT=''
FGREP='/usr/bin/grep -F'
FILECMD='file'
GREP='/usr/bin/grep'
HAVE_GETLINE_FALSE=''
HAVE_GETLINE_TRUE=''
HAVE_STRLCAT_FALSE=''
HAVE_STRLCAT_TRUE=''
HAVE_STRLCPY_FALSE=''
HAVE_STRLCPY_TRUE=''
HAVE_UNVIS_FALSE=''
HAVE_UNVIS_TRUE=''
HAVE_VIS_FALSE=''
HAVE_VIS_TRUE=''
INSTALL_DATA='${INSTALL} -m 644'
INSTALL_PROGRAM='${INSTALL}'
INSTALL_SCRIPT='${INSTALL}'
INSTALL_STRIP_PROGRAM='$(install_sh) -c -s'
LD='/usr/bin/ld -m elf_x86_64'
LDFLAGS='-L/home/joe/repos/sigdb/sigdb/build/vcpkg_installed/x64-linux/debug/lib -L/home/joe/repos/sigdb/sigdb/build/vcpkg_installed/x64-linux/debug/lib/manual-link'
LIBOBJS=''
LIBS=''
LIBTOOL='$(SHELL) $(top_builddir)/libtool'
LIPO=''
LN_S='ln -s'
LTLIBOBJS=''
LT_SYS_LIBRARY_PATH=''
LT_VERSION='0:74:0'
MAKEINFO='${SHELL} '\''/home/joe/repos/sigdb/vcpkg/buildtrees/libedit/src/20240808-3-eb4c8bbbd6.clean/missing'\'' makeinfo'
MANIFEST_TOOL=':'
MANTYPE='mdoc'
MKDIR_P='/usr/bin/mkdir -p'
NM='/usr/bin/nm'
NMEDIT=''
NROFF='/usr/bin/nroff'
OBJDUMP='/usr/bin/objdump'
OBJEXT='o'
OTOOL64=''
OTOOL=''
PACKAGE='libedit-20260312'
PACKAGE_BUGREPORT=''
PACKAGE_NAME='libedit'
PACKAGE_STRING='libedit 3.1'
PACKAGE_TARNAME='libedit-20260312'
PACKAGE_URL=''
PACKAGE_VERSION='3.1'
PATH_SEPARATOR=':'
RANLIB='/usr/bin/ranlib'
SED='/usr/bin/sed'
SET_MAKE=''
SHELL='/bin/sh'
STRIP='/usr/bin/strip'
VERSION='3.1'
ac_ct_AR=''
ac_ct_CC='/usr/bin/cc'
ac_ct_DUMPBIN=''
am__EXEEXT_FALSE=''
am__EXEEXT_TRUE=''
am__fastdepCC_FALSE='#'
am__fastdepCC_TRUE=''
am__include='include'
am__isrc=' -I$(srcdir)'
am__leading_dot='.'
am__nodep='_no'
am__quote=''
am__rm_f_notfound=''
am__tar='$${TAR-tar} chof - "$$tardir"'
am__untar='$${TAR-tar} xf -'
am__xargs_n='xargs -n'
bindir='${prefix}/../tools/libedit/debug/bin'
build='x86_64-pc-linux-gnu'
build_alias=''
build_cpu='x86_64'
build_os='linux-gnu'
build_vendor='pc'
datadir='${datarootdir}'
datarootdir='${prefix}/share/libedit'
docdir='${datarootdir}/doc/${PACKAGE_TARNAME}'
dvidir='${docdir}'
exec_prefix='NONE'
host='x86_64-pc-linux-gnu'
host_alias=''
host_cpu='x86_64'
host_os='linux-gnu'
host_vendor='pc'
htmldir='${docdir}'
includedir='${prefix}/../include'
infodir='${datarootdir}/info'
install_sh='${SHELL} /home/joe/repos/sigdb/vcpkg/buildtrees/libedit/src/20240808-3-eb4c8bbbd6.clean/install-sh'
libdir='${prefix}/lib'
libexecdir='${exec_prefix}/libexec'
localedir='${datarootdir}/locale'
localstatedir='${prefix}/var'
mandir='${datarootdir}/man'
mkdir_p='$(MKDIR_P)'
oldincludedir='/usr/include'
pdfdir='${docdir}'
prefix='/home/joe/repos/sigdb/sigdb/build/vcpkg_installed/x64-linux/debug'
program_transform_name='s,x,x,'
psdir='${docdir}'
runstatedir='${localstatedir}/run'
sbindir='${prefix}/../tools/libedit/debug/sbin'
sharedstatedir='${prefix}/com'
sysconfdir='${prefix}/etc'
target_alias=''

## ----------- ##
## confdefs.h. ##
## ----------- ##

/* confdefs.h */
#define PACKAGE_NAME "libedit"
#define PACKAGE_TARNAME "libedit-20260312"
#define PACKAGE_VERSION "3.1"
#define PACKAGE_STRING "libedit 3.1"
#define PACKAGE_BUGREPORT ""
#define PACKAGE_URL ""
#define HAVE_STDIO_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRING_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_STDINT_H 1
#define HAVE_STRINGS_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_UNISTD_H 1
#define HAVE_WCHAR_H 1
#define STDC_HEADERS 1
#define _ALL_SOURCE 1
#define _DARWIN_C_SOURCE 1
#define _GNU_SOURCE 1
#define _HPUX_ALT_XOPEN_SOCKET_API 1
#define _NETBSD_SOURCE 1
#define _OPENBSD_SOURCE 1
#define _POSIX_PTHREAD_SEMANTICS 1
#define __STDC_WANT_IEC_60559_ATTRIBS_EXT__ 1
#define __STDC_WANT_IEC_60559_BFP_EXT__ 1
#define __STDC_WANT_IEC_60559_DFP_EXT__ 1
#define __STDC_WANT_IEC_60559_EXT__ 1
#define __STDC_WANT_IEC_60559_FUNCS_EXT__ 1
#define __STDC_WANT_IEC_60559_TYPES_EXT__ 1
#define __STDC_WANT_LIB_EXT2__ 1
#define __STDC_WANT_MATH_SPEC_FUNCS__ 1
#define _TANDEM_SOURCE 1
#define __EXTENSIONS__ 1
#define PACKAGE "libedit-20260312"
#define VERSION "3.1"
#define HAVE_DLFCN_H 1
#define LT_OBJDIR ".libs/"

configure: exit 1
```
</details>

**Additional context**

<details><summary>vcpkg.json</summary>

```
{
  "dependencies": [
    "catch2",
    "libedit"
  ]
}

```
</details>
