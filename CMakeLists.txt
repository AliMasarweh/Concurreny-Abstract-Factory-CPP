cmake_minimum_required(VERSION 3.15)
project(PlatformIndepentConcurency)

set(CMAKE_CXX_STANDARD 98)

#include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
find_package(Threads)

add_executable(PlatformIndepentConcurency main.cpp concurency_abstract_factory.h thread.h mutex.h)
#target_link_libraries(consumer_producer gtest gtest_main pthread)
target_link_libraries(PlatformIndepentConcurency ${CMAKE_THREAD_LIBS_INIT})
target_link_libraries(PlatformIndepentConcurency rt)