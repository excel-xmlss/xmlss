set(PROJECT TestXMLSS)

set(SOURCES
    TestOrange_XMLSS.cc
)

add_compile_options(-O0 -fprofile-arcs -ftest-coverage)

include_directories(../../orange_xmlss)

add_executable(${PROJECT} ${SOURCES})

target_link_libraries(${PROJECT}
    PUBLIC
         XMLSS
         gtest
         gtest_main
         gmock
         gmock_main
         pthread
)

add_test(
    NAME ${PROJECT}
    COMMAND ${PROJECT}
)