#include <cstdint>
#include <iostream>

std::uint32_t read_le(const unsigned char* b) {
    if (b == nullptr) return 0;

    return static_cast<std::uint32_t>(b[0])
        | (static_cast<std::uint32_t>(b[1]) << 8)
        | (static_cast<std::uint32_t>(b[2]) << 16)
        | (static_cast<std::uint32_t>(b[3]) << 24);
}

std::uint32_t read_be(const unsigned char* b) {
    if (b == nullptr) return 0;

    return (static_cast<std::uint32_t>(b[0]) << 24)
        | (static_cast<std::uint32_t>(b[1]) << 16)
        | (static_cast<std::uint32_t>(b[2]) << 8)
        | static_cast<std::uint32_t>(b[3]);
}

int main() {
    unsigned char bytes[] = {
        0x78, 0x56, 0x34, 0x12
    };

    std::cout << std::hex
              << read_le(bytes) << ' '
              << read_be(bytes) << '\n';

    return 0;
}