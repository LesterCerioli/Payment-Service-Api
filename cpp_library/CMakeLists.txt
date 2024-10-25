
cmake_minimum_required(VERSION 3.10)
project(PaymentService)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${PROJECT_SOURCE_DIR}/include)

file(GLOB SOURCES "${PROJECT_SOURCE_DIR}/src/*.cpp")

add_library(payment_library ${SOURCES})

target_link_libraries(payment_library)

find_package(Threads REQUIRED)