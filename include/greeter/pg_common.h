/*
#include <array>

constexpr int dot(const std::array<int, 3>& a, const std::array<int, 3>& b) {
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

constexpr std::array<int, 3> cross(const std::array<int, 3>& a, const std::array<int, 3>& b) {
    return {
        a[1] * b[2] - a[2] * b[1],
        a[2] * b[0] - a[0] * b[2],
        a[0] * b[1] - a[1] * b[0]
    };
}

constexpr std::array<int, 3> plucker(const std::array<int, 3>& a, int lambda, const std::array<int, 3>& b, int mu) {
    return {
        lambda * a[0] + mu * b[0],
        lambda * a[1] + mu * b[1],
        lambda * a[2] + mu * b[2]
    };
}
*/