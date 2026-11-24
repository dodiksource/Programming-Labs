#include <cstdint>
#include <iostream>

std::uint8_t pack(const bool b[8]) {
    std::uint8_t result = 0;

    for (int i = 0; i < 8; ++i) {
        if (b[i]) {
            result |= static_cast<std::uint8_t>(1U << i);
        }
    }

    return result;
}

int main() {
    const bool buttons[8] = {
        true, false, false, true,
        true, false, false, false
    };

    std::uint8_t value = pack(buttons);

    std::cout << static_cast<int>(value) << '\n';

    for (int i = 0; i < 8; ++i) {
        std::cout << ((value >> i) & 1U);

        if (i < 7) {
            std::cout << ' ';
        }
    }

    std::cout << '\n';

    return 0;
}