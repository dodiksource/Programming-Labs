#include <iostream>

int main() {
    int m[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };

    int result[4][3];

    for (int row = 0; row < 3; ++row) {
        for (int col = 0; col < 4; ++col) {
            result[col][row] = m[row][col];
        }
    }

    for (int row = 0; row < 4; ++row) {
        for (int col = 0; col < 3; ++col) {
            if (col > 0) {
                std::cout << ' ';
            }

            std::cout << result[row][col];
        }

        std::cout << '\n';
    }

    return 0;
}