cmake_minimum_required(VERSION 3.5)

project(NUMEROMAYOR LANGUAGES C)

add_executable(NUMEROMAYOR main.c)

install(TARGETS NUMEROMAYOR
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
