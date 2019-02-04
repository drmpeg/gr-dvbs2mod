INCLUDE(FindPkgConfig)
PKG_CHECK_MODULES(PC_DVBS2MOD dvbs2mod)

FIND_PATH(
    DVBS2MOD_INCLUDE_DIRS
    NAMES dvbs2mod/api.h
    HINTS $ENV{DVBS2MOD_DIR}/include
        ${PC_DVBS2MOD_INCLUDEDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/include
          /usr/local/include
          /usr/include
)

FIND_LIBRARY(
    DVBS2MOD_LIBRARIES
    NAMES gnuradio-dvbs2mod
    HINTS $ENV{DVBS2MOD_DIR}/lib
        ${PC_DVBS2MOD_LIBDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/lib
          ${CMAKE_INSTALL_PREFIX}/lib64
          /usr/local/lib
          /usr/local/lib64
          /usr/lib
          /usr/lib64
)

INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(DVBS2MOD DEFAULT_MSG DVBS2MOD_LIBRARIES DVBS2MOD_INCLUDE_DIRS)
MARK_AS_ADVANCED(DVBS2MOD_LIBRARIES DVBS2MOD_INCLUDE_DIRS)

