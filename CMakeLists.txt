cmake_minimum_required(VERSION 2.6)
project(qpsing)

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
message(STATUS "")

add_executable(main main.cc
		world/worldgenerator.cc
		weapons/weapon.cc
		spells/spell.cc
		effects/effect.cc
		drivers/graphics/display.cc
		drivers/kboard.cc
		actors/actor.cc)

target_link_libraries(main ${CURSES_LIBRARIES})
