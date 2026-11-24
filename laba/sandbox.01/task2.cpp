#include <iostream>
#include <cstdint>

int main() {
    std::uint8_t byte = 255;
    byte = byte + 1;
    std::cout << "255 + 1 = " << static_cast<int>(byte) << "\n";
    
    std::uint8_t zero = 0;
    zero = zero - 1;
    std::cout << "0 - 1 = " << static_cast<int>(zero) << "\n";
    return 0;
}
