cmake_minimum_required(VERSION 2.6)
project(qpsing)

add_definitions(-g -O0 -Wall)

add_executable(main main.cc
		world/worldgenerator.cc
		weapons/weapon.cc
		spells/spell.cc
		effects/effect.cc
		drivers/graphics/display.cc
		drivers/graphics/terminalRender.cc
		drivers/kboard.cc
		actors/actor.cc)
