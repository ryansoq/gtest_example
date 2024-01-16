#include <gtest/gtest.h>
#include <cmath>

std::string target;

TEST(Test, SampleTest) {
    EXPECT_EQ(1, 1);
}


TEST(ValueTest, predict) {
    float golden_retriever = 12.5499;
    float predict = 12.6399;

    EXPECT_LT(std::abs(golden_retriever - predict), 0.1);
}

TEST(StringTest, compare) {
    // Capture the output of an external program
    testing::internal::CaptureStdout();

    // Execute the external program
    system(("./" + target).c_str());

    // Get the captured content
    std::string output = testing::internal::GetCapturedStdout();

    // Assert that the captured output contains specific substrings
    EXPECT_TRUE(output.find("1: golden_retriever") != std::string::npos);
}

int main(int argc, char **argv) {

    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <target_file>" << std::endl;
        return 1;
    }

    target = argv[1];
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
