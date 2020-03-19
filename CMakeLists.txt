cmake_minimum_required(VERSION 3.15)
project(PlatformIndepentConcurency)

set(CMAKE_CXX_STANDARD 98)

#include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
find_package(Threads)

add_executable(PlatformIndepentConcurency main.cpp concurrency_abstract_factory.h thread.h mutex.h
        linux_thread.h linux_thread.cpp linux_mutex.h linux_mutex.cpp
        message_queue.h linux_message_queue.h linux_message_queue.cpp linux_concurrency_abstract_factory.h
        linux_concurrency_abstract_factory.cpp concurrency_abstract_factory.cpp
        semaphore.h linux_semaphore.h linux_semaphore.cpp)
#target_link_libraries(consumer_producer gtest gtest_main pthread)
target_link_libraries(PlatformIndepentConcurency ${CMAKE_THREAD_LIBS_INIT})
target_link_libraries(PlatformIndepentConcurency rt)
