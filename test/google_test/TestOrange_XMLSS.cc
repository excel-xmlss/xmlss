#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "orange_xmlss.h"

TEST(TestXMLSS, defaultTest){
    ASSERT_EQ(true, true);
}


TEST(TestUtil, test_convert_column_to_string){
    std::string A = orage_xmlss::convert_column_to_string(1);
    ASSERT_EQ("A",A);
    std::string B = orage_xmlss::convert_column_to_string(2);
    ASSERT_EQ("B",B);
    std::string Y = orage_xmlss::convert_column_to_string(25);
    ASSERT_EQ("Y",Y);
    std::string Z = orage_xmlss::convert_column_to_string(26);
    ASSERT_EQ("Z",Z);
    std::string NONE = orage_xmlss::convert_column_to_string(0);
    ASSERT_EQ("",NONE);
    std::string AA = orage_xmlss::convert_column_to_string(27);
    ASSERT_EQ("AA",AA);
    std::string AB = orage_xmlss::convert_column_to_string(28);
    ASSERT_EQ("AB",AB);
    std::string GZ = orage_xmlss::convert_column_to_string(208);
    ASSERT_EQ("GZ",GZ);
    std::string HA = orage_xmlss::convert_column_to_string(209);
    ASSERT_EQ("HA",HA);
    std::string ZY = orage_xmlss::convert_column_to_string(701);
    ASSERT_EQ("ZY",ZY);
    std::string ZZ = orage_xmlss::convert_column_to_string(702);
    ASSERT_EQ("ZZ",ZZ);
    std::string AAA = orage_xmlss::convert_column_to_string(703);
    ASSERT_EQ("AAA",AAA);
    std::string AAB = orage_xmlss::convert_column_to_string(704);
    ASSERT_EQ("AAB",AAB);
    std::string ARO = orage_xmlss::convert_column_to_string(1159);
    ASSERT_EQ("ARO",ARO);
    std::string BBY = orage_xmlss::convert_column_to_string(1429);
    ASSERT_EQ("BBY",BBY);
}

int main(int argc, char** argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}