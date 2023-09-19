#include <stdexcept>
#include <stdlib.h>  
#include "gtest/gtest.h"
#include "utils.h"

/****************************************************************
Test Case Name.Test Name： HomescreenUtilsRtrim_Lv1Normal001
Use Case Name: Intialization
Test Summary：Test the function of rtrim
***************************************************************/

TEST(HomescreenUtilsRtrim, Lv1Normal001) {
    std::string input = "unit test";
    std::string output = Utils::rtrim(input, "t");
    EXPECT_EQ("unit tes", output);
}

/****************************************************************
Test Case Name.Test Name： HomescreenUtilsLtrim_Lv1Normal001
Use Case Name: Intialization
Test Summary：Test the function of ltrim
***************************************************************/

TEST(HomescreenUtilsLtrim, Lv1Normal001) {
    std::string input = "unit test";
    std::string output = Utils::ltrim(input, "u");
    EXPECT_EQ("nit test", output);
}

/****************************************************************
Test Case Name.Test Name： HomescreenUtilsTrim_Lv1Normal001
Use Case Name: Intialization
Test Summary：Test the function of trim
***************************************************************/

TEST(HomescreenUtilsTrim, Lv1Normal001) {
    std::string input = "unit test";
    std::string output = Utils::trim(input, "ut");
    EXPECT_EQ("nit tes", output);
}

/****************************************************************
Test Case Name.Test Name： HomescreenUtilsIsNumber_Lv1Normal001
Use Case Name: Intialization
Test Summary：Test the function of IsNumber
***************************************************************/

TEST(HomescreenUtilsIsNumber, Lv1Normal001) {
    bool result = Utils::IsNumber("1234567890");
    EXPECT_EQ(true, result);
}

/****************************************************************
Test Case Name.Test Name： HomescreenUtilsRemoveArgument_Lv1Normal001
Use Case Name: Intialization
Test Summary：Test the function of RemoveArgument
***************************************************************/

TEST(HomescreenUtilsRemoveArgument, Lv1Normal001) {
    std::vector<std::string> args{"test1", "test2", "test3"};
    Utils::RemoveArgument(args, "test2");

    for(std::string str : args) {
        EXPECT_STRNE("test2", str.c_str());
    }
}
