#include <gtest/gtest.h>
#include "../include/zamenitel3000.h"

TEST(test_01, basic_test_set) {
    ASSERT_TRUE(zamenitel3000("abc") == "bac");
}

TEST(test_02, basic_test_set) {
    ASSERT_TRUE(zamenitel3000("cab") == "cba");
}

TEST(test_03, basic_test_set) {
    ASSERT_TRUE(zamenitel3000("abacaba") == "babcbab");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
