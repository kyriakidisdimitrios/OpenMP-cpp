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
        test4.cpp
        test4.cpp
        test4_critical.cpp
        test4_barrier.cpp
        test4_atomic.cpp
        test4_atomic.cpp
        test5.cpp
        test6.cpp
        test6_omp_construct.cpp
        test6_master_construct.cpp
        test6_single_construct.cpp
        test6_section_construct.cpp
        test7.cpp
        test7_construct_type.cpp
        test8.cpp
        test8_fibonacci.cpp
)

# Link OpenMP libraries
target_link_libraries(OpenMP_cpp OpenMP::OpenMP_CXX)