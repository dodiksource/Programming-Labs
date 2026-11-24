#include <iostream>

int main() {
    std::cout << 65 << ' '
              << 0x41 << ' '
              << (int)'A' << ' '
              << (char)65 << '\n';

    std::cout << (char)('A' + 1) << '\n';

    std::cout << 5 / 2 << ' '
              << 5 / 2.0 << '\n';
}
