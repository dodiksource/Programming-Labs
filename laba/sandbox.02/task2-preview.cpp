#include <iostream>

int main() {
    int numbers[] = {1, 2, 6, 64, 96, 0};

    for (int i = 0; i < 6; ++i) {
        int x = numbers[i];

        bool power = x != 0 && (x & (x - 1)) == 0;

        std::cout << x
                  << (power ? " так" : " ні")
                  << '\n';
    }
}