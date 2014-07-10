cmake_minimum_required(VERSION 2.6)
project(qpsing)

# set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake/modules;${CMAKE_MOUDLE_PATH}")

add_definitions(-g -O0 -Wall)

message(STATUS "-- Curses:")
find_package(Curses REQUIRED)
message(STATUS "found : ${CURSES_FOUND}")
message(STATUS "include dir : ${CURSES_INCLUDE_DIR}")
message(STATUS "libraries : ${CURSES_LIBRARIES}")
message(STATUS "curses.h : ${CURSES_HAVE_CURSES_H}")
message(STATUS "ncurses.h : ${CURSES_HAVE_NCURSES_H}")
message(STATUS "ncurses.h : ${CURSES_HAVE_NCURSES_NCURSES_H}")
message(STATUS "curses.h : ${CURSES_HAVE_NCURSES_CURSES_H}")
message(STATUS "TRY TO COMPILE!")

add_executable(main src/main.cc
		src/world/worldgenerator.cc
		src/weapons/weapon.cc
		src/spells/spell.cc
		src/effects/effect.cc
		src/drivers/graphics/display.cc
		src/drivers/kboard.cc
		src/actors/actor.cc)

target_link_libraries(main ${CURSES_LIBRARIES})
