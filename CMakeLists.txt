cmake_minimum_required(VERSION 3.1)
project(clan)

if (${CMAKE_CXX_COMPILER_ID} STREQUAL "GNU" OR ${CMAKE_CXX_COMPILER_ID} STREQUAL "Clang")
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic -std=c++11")
	set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS} ${CMAKE_CXX_FLAGS_DEBUG} -g")
	set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS} ${CMAKE_CXX_FLAGS_RELEASE} -O2")
elseif (${CMAKE_CXX_COMPILER_ID} STREQUAL "MSVC")
	if (CMAKE_CXX_FLAGS MATCHES "/W[0-4]")
		string(REGEX REPLACE "/W[0-4]" "/W4" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
	else()
		set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4")
	endif()
endif()

add_definitions(-Isdk)
find_package(PkgConfig)
pkg_check_modules(CLANLIB clanCore-3.0 clanDisplay-3.0 clanGL-3.0 clanSWRender-3.0 clanApp-3.0)

link_directories(
    ${CLANLIB_LIBRARY_DIRS}
)

set(SOURCE_FILES CApp.cpp)

add_executable(clan ${SOURCE_FILES} CApp.cpp CApp.h precomp.h precomp.cpp CProgram.cpp CProgram.h CGameObjects.cpp CGameObjects.h)

target_link_libraries(clan ${CLANLIB_LIBRARIES}
)

