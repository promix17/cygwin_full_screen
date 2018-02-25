cmake_minimum_required(VERSION 2.8)

project(full_screen)
	set(PROJECT_NAME "full_screen")	
	
	file(GLOB MAIN_SOURCES src/*)	
	
	add_executable(${PROJECT_NAME} ${MAIN_SOURCES})
