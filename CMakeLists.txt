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

add_executable(main src/main.cc
		src/mechanics/world/worldgenerator.cc
		src/mechanics/weapons/weapon.cc
		src/mechanics/spells/spell.cc
		src/mechanics/effects/effect.cc
		src/drivers/graphics/display.cc
		src/drivers/graphics/draw.cc
		src/drivers/kboard.cc
		src/mechanics/actors/actor.cc
		src/drivers/graphics/terminalRender.cc
		src/mechanics/game.cc)

target_link_libraries(main ${CURSES_LIBRARIES})
