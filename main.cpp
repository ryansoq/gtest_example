#include <gtest/gtest.h>
#include <cmath>

TEST(MyTest, ExampleTest) {
    EXPECT_EQ(1, 1);
}


TEST(ResNetTest, predict) {
    float golden_retriever = 12.5499;
    float predict = 15.6399;

    EXPECT_LT(std::abs(golden_retriever - predict), 0.1);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
