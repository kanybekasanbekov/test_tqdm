### To build this project run the following commands:
### cmake ...
### make
### ./{executable_file_name}

cmake_minimum_required(VERSION 3.23)
# set the project name
project(test_tqdm)


# include_directories(include)
# add_executable(og_tqdm og_tqdm.cpp)


# include_directories(cpptqdm)
# add_executable(cpp_tqdm cpp_tqdm.cpp)


set (CMAKE_CXX_STANDARD 17)
include_directories(tqdm-cpp)
add_executable(tqdm_cpp tqdm_cpp.cpp)