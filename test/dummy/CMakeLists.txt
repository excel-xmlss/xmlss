cmake_minimum_required(VERSION 3.8)

set(PROJECT XMLSS)

#add_compile_options(-fprofile-arcs -ftest-coverage)

include_directories(../../orange_xmlss)
file(GLOB SRCS ${CMAKE_CURRENT_SOURCE_DIR}/*.cc)

add_library(${PROJECT} STATIC ${SRCS})
target_link_libraries(${PROJECT}
    PUBLIC
        gcov
        #curl
)

set(PROJECT DummyExecutable)

add_executable(${PROJECT} ${SRCS})

target_link_libraries(${PROJECT}
    PUBLIC
        XMLSS
        #curl
)