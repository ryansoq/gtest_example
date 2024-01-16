set -x
g++ main.cpp -o gtest -std=c++14 -I ${PWD}/usr/include/ -L ${PWD}/usr/lib -lgtest -pthread
