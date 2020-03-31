cmake_minimum_required(VERSION 3.14)
project(openssl_C__)

set(CMAKE_CXX_STANDARD 14)

#set(INC_DIR /Users/sniper/opt/anaconda3/include)
#set(LINK_DIR /Users/sniper/opt/anaconda3/lib)

#include_directories(${INC_DIR})
#link_directories(${LINK_DIR})

include_directories("/usr/local/include")
link_directories("/usr/local/lib")
link_libraries(pthread)
link_libraries(protobuf)

add_executable(openssl_C__ main.cpp)

target_link_libraries(openssl_C__ pthread)
target_link_libraries(openssl_C__ protobuf)

