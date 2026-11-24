#include <iostream>

int main() {
    long long factorial = 1;
    int largest = 1;

    for (int n = 1; n <= 20; ++n) {
        if (factorial > 2147483647LL / n) {
            break;
        }

        factorial *= n;
        largest = n;
    }

    std::cout << largest << '\n';

    return 0;
}