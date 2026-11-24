#include <iostream>

const int* max_ptr(const int* a, int n) {
    if (a == nullptr || n <= 0) {
        return nullptr;
    }

    const int* max = a;

    for (int i = 1; i < n; ++i) {
        if (a[i] > *max) {
            max = &a[i];
        }
    }

    return max;
}

int main() {
    const int a[] = {3, 9, 2, 9, 5};

    const int* p = max_ptr(a, 5);

    if (p != nullptr) {
        std::cout << *p << ' ' << (p - a) << '\n';
    }

    return 0;
}