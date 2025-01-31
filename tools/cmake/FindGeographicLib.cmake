# set some default search paths

# SET( GEOGRAPHICLIB_SEARCH_PATH ${GEOGRAPHICLIB_SEARCH_PATH} "/usr/include" )
# SET( GEOGRAPHICLIB_SEARCH_PATH ${GEOGRAPHICLIB_SEARCH_PATH} "/usr/lib" )
# SET( GEOGRAPHICLIB_SEARCH_PATH ${GEOGRAPHICLIB_SEARCH_PATH} "/usr/lib64" )
# SET( GEOGRAPHICLIB_SEARCH_PATH ${GEOGRAPHICLIB_SEARCH_PATH} "/opt/local/include" )
# SET( GEOGRAPHICLIB_SEARCH_PATH ${GEOGRAPHICLIB_SEARCH_PATH} "/opt/local/lib" )

# search for the include path and the library path

SET (GEOGRAPHICLIB_ROOT_DIR ${GEOGRAPHICLIB_ROOT_DIR} "/usr/local")

FIND_PATH (GEOGRAPHICLIB_INCLUDE_DIR "GeographicLib/Geoid.hpp" PATHS ${GEOGRAPHICLIB_ROOT_DIR} PATH_SUFFIXES "include" NO_DEFAULT_PATH)

FIND_LIBRARY (GEOGRAPHICLIB_LIBRARY NAMES "libGeographic.a" PATHS ${GEOGRAPHICLIB_ROOT_DIR} PATH_SUFFIXES "lib" NO_DEFAULT_PATH)

SET (GEOGRAPHICLIB_LIBRARIES ${GEOGRAPHICLIB_LIBRARY})
SET (GEOGRAPHICLIB_INCLUDE_DIRS ${GEOGRAPHICLIB_INCLUDE_DIR})

# MESSAGE (STATUS "GEOGRAPHICLIB_ROOT_DIR = ${GEOGRAPHICLIB_ROOT_DIR}")
# MESSAGE (STATUS "GEOGRAPHICLIB_LIBRARIES = ${GEOGRAPHICLIB_LIBRARIES}")
# MESSAGE (STATUS "GEOGRAPHICLIB_INCLUDE_DIRS = ${GEOGRAPHICLIB_INCLUDE_DIRS}")

INCLUDE (FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS (GeographicLib DEFAULT_MSG GEOGRAPHICLIB_LIBRARY GEOGRAPHICLIB_INCLUDE_DIR)

# mark both variables as advance
MARK_AS_ADVANCED( GEOGRAPHICLIB_INCLUDE_DIR GEOGRAPHICLIB_LIBRARY )
