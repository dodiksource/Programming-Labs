#include <iostream>
#include <climits>

int main() {
    int max_val = INT_MAX; // 2147483647
    std::cout << "Before: " << max_val << "\n";
    // Навмисна поломка для UBSan:
    int overflowed = max_val + 1; 
    std::cout << "After: " << overflowed << "\n";
    return 0;
}
