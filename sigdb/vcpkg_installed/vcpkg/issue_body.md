Package: libedit:x64-linux@2024-08-08

**Host Environment**

- Host: x64-linux
- Compiler: GNU 15.2.1
- CMake Version: 3.31.10
-    vcpkg-tool version: 2026-03-04-4b3e4c276b5b87a649e66341e11553e8c577459c
    vcpkg-scripts version: 1e199d32ad 2026-03-06 (3 days ago)

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
Downloading https://thrysoee.dk/editline/libedit-20240808-3.1.tar.gz -> libedit-20240808-3.1.tar.gz
Successfully downloaded libedit-20240808-3.1.tar.gz
-- Extracting source /home/joe/repos/sigdb/vcpkg/downloads/libedit-20240808-3.1.tar.gz
-- Using source at /home/joe/repos/sigdb/vcpkg/buildtrees/libedit/src/20240808-3-eb4c8bbbd6.clean
-- Getting CMake variables for x64-linux-dbg
-- Getting CMake variables for x64-linux-rel
-- Generating configure for x64-linux
CMake Error at scripts/cmake/vcpkg_execute_required_process.cmake:127 (message):
    Command failed: /usr/bin/autoreconf -vfi
    Working Directory: /home/joe/repos/sigdb/vcpkg/buildtrees/libedit/src/20240808-3-eb4c8bbbd6.clean/
    Error code: 2
    See logs for more information:
      /home/joe/repos/sigdb/vcpkg/buildtrees/libedit/autoconf-x64-linux-err.log

Call Stack (most recent call first):
  scripts/cmake/vcpkg_configure_make.cmake:731 (vcpkg_execute_required_process)
  ports/libedit/portfile.cmake:26 (vcpkg_configure_make)
  scripts/ports.cmake:206 (include)



```

<details><summary>/home/joe/repos/sigdb/vcpkg/buildtrees/libedit/autoconf-x64-linux-err.log</summary>

```
autoreconf: export WARNINGS=
autoreconf: Entering directory '.'
autoreconf: configure.ac: not using Gettext
autoreconf: running: aclocal --force -I m4
autoreconf: configure.ac: tracing
autoreconf: running: libtoolize --copy --force
Can't exec "libtoolize": No such file or directory at /usr/share/autoconf/Autom4te/FileUtils.pm line 318.
autoreconf: error: libtoolize failed with exit status: 2
```
</details>

**Additional context**

<details><summary>vcpkg.json</summary>

```
{
  "dependencies": [
    "libedit",
    "catch2"
  ]
}

```
</details>
