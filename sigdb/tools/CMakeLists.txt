find_package(PkgConfig REQUIRED)
pkg_check_modules(LIBEDIT REQUIRED IMPORTED_TARGET libedit)

add_executable(sdb sdb.cpp)

target_link_libraries(sdb PRIVATE sdb::libsdb PkgConfig::LIBEDIT)
