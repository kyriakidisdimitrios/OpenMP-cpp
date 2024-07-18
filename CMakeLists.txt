cmake_minimum_required(VERSION 3.28)
project(OpenMP_cpp)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Find OpenMP
find_package(OpenMP REQUIRED)

# Add the executable
add_executable(OpenMP_cpp
        main.cpp
        test1.cpp
        test2.cpp
        test3.cpp
)

# Link OpenMP libraries
target_link_libraries(OpenMP_cpp OpenMP::OpenMP_CXX)