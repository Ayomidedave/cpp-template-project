
# Look for headers in the include directory
include_directories(${CMAKE_SOURCE_DIR}/include)
add_library(student_class SHARED student_class.cpp)

# You can also add any stand alone executables
# add_executable(example main.cpp) # Will make a binary called "example" inside build/bin using main.cpp
