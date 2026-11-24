#include <cstdint>
#include <iostream>

struct Pair {
    std::uint8_t lo;
    std::uint8_t hi;
};

std::uint16_t join(Pair p) {
    return static_cast<std::uint16_t>(p.lo) |
           (static_cast<std::uint16_t>(p.hi) << 8);
}

int main() {
    std::cout << join({0x34, 0x12}) << ' '
              << join({0x2C, 0x01}) << '\n';

    return 0;
}