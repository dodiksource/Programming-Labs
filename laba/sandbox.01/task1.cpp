#include <iostream>
#include <cstdint>

int main() {
    std::cout << "char: " << sizeof(char) << "\n";
    std::cout << "uint8_t: " << sizeof(std::uint8_t) << "\n";
    std::cout << "int: " << sizeof(int) << "\n";
    std::cout << "uint64_t: " << sizeof(std::uint64_t) << "\n";
    std::cout << "double: " << sizeof(double) << "\n";
    return 0;
}
