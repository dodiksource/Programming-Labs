
#include <iostream>

int collatz_steps(int n) {
    int steps = 0;

    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }

        steps++;
    }

    return steps;
}

int main() {
    int best_number = 1;
    int best_steps = 0;

    for (int n = 1; n <= 99; n++) {
        int steps = collatz_steps(n);

        if (steps > best_steps) {
            best_steps = steps;
            best_number = n;
        }
    }

    std::cout << best_number << ' '
              << best_steps << '\n';

    return 0;
}
