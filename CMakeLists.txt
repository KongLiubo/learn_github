cmake_minimum_required(VERSION 3.10)

project(SOLIDERFIRE)

include_directories(${CMAKE_SOURCE_DIR}/include)

# set(SRC src/Gun.cpp src/Solider.cpp)
set(SRC src/Gun.cpp src/Solider.cpp)
add_library(libsolider SHARED ${SRC})

add_compile_options(-Wall -std=c++11 -g)

add_executable(CM_mainexe main.cpp)
target_link_libraries(CM_mainexe 
    libsolider
    ${catkin_LIBRARIES}
)
