#include <gtest/gtest.h>
#include <gmock/gmock.h>

using testing::InitGoogleTest;
using testing::Test;
using testing::TestCase;


namespace {


TEST(TestXMLSS, defaultTest){
    ASSERT_EQ(true, true);
}


}


int main(int argc, char** argv){
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}