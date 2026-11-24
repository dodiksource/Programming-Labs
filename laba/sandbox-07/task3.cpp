#include <iostream>

void min_max(const int* a, int n, int& mn, int& mx) {
    if (n <= 0) {
        mn = 0;
        mx = 0;
        return;
    }

    mn = a[0];
    mx = a[0];

    for (int i = 1; i < n; ++i) {
        if (a[i] < mn) {
            mn = a[i];
        }

        if (a[i] > mx) {
            mx = a[i];
        }
    }
}

int main() {
    const int values[] = {4, -2, 9, 0};

    int minimum = 0;
    int maximum = 0;

    min_max(values, 4, minimum, maximum);

    std::cout << minimum << ' '
              << maximum << '\n';

    return 0;
}