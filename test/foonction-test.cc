#include "foonction.h"
#include <gtest/gtest.h>

TEST(FoonctionTest, AddSignalTest) {
    std::size_t len = 100;
    std::complex<float> a[len] = {{0, 0}};
    std::complex<float> b[len] = {{1, 1}};
    std::complex<float> c[len] = {{1, 0}};
    AddSignal(a, b, c, len, false);
}
/*
TEST(FoonctionTest, AddSignalVgTest) {
    std::size_t len = 100;
    std::complex<float> a[len] = {{0, 0}};
    std::complex<float> b[len] = {{1, 1}};
    std::complex<float> c[len] = {{1, 0}};
    AddSignal(a, b, c, len, true);
}
*/