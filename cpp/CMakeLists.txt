set(project "hello")

project(${project})
cmake_minimum_required(VERSION 3.12)

set(src 
	  hello.cpp
	  fib.cpp
	)

set(exports 
	  _new_fib 
	  _next_val
	)


# process exported functions
set(exports_string "")
list(JOIN exports "," exports_string)

# set compiler and flags
SET(CMAKE_C_COMPILER emcc)
SET(CMAKE_CPP_COMPILER em++)
set( CMAKE_CXX_FLAGS "-s EXPORTED_FUNCTIONS=\"[${exports_string}]\""  )

# specify the project
add_executable(${project}.html ${src})
