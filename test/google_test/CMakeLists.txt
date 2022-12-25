set(PROJECT TestXMLSS)

set(SOURCES
        TestXMLSS.cc
)

include_directories(../../xmlss_hdr)

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