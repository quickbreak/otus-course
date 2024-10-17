#include "lib.h"

#include <gtest/gtest.h>

TEST(test_case_name, test_name)
{
	ASSERT_TRUE(version() > 0);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}