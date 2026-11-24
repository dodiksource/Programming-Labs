#include <cstdint>
#include <iostream>

int main() {
    int numbers[] = {7, 10, -3};

    for (int i = 0; i < 3; ++i) {
        int x = numbers[i];

        std::cout << x << ": "
                  << (x % 2) << ' '
                  << (x & 1) << '\n';
    }
