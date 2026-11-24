#include <cstdint>
#include <iostream>

const std::uint8_t UP = 1u << 0;
const std::uint8_t DOWN = 1u << 1;
const std::uint8_t LEFT = 1u << 2;
const std::uint8_t RIGHT = 1u << 3;
const std::uint8_t BTN_A = 1u << 4;
const std::uint8_t BTN_B = 1u << 5;

int main() {
    std::uint8_t pad = 0;

    pad |= UP;
    pad |= BTN_A;
    pad |= RIGHT;

    pad &= (std::uint8_t)~UP;

    std::cout << (int)pad << ":";

    std::uint8_t buttons[] = {
        UP, DOWN, LEFT, RIGHT, BTN_A, BTN_B
    };

    for (int i = 0; i < 6; ++i) {
        std::cout << ' ' << ((pad & buttons[i]) != 0);
    }

    std::cout << '\n';
}