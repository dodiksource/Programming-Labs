#include <iostream>
#include <bitset>
#include <cstdint>

int main() {
    std::uint8_t val = 65; // 'A'
    std::cout << "DEC: " << std::dec << static_cast<int>(val) << "\n";
    std::cout << "HEX: 0x" << std::hex << static_cast<int>(val) << "\n";
    std::cout << "BIN: 0b" << std::bitset<8>(val) << "\n";
    std::cout << "CHR: '" << static_cast<char>(val) << "'\n";
    return 0;
}