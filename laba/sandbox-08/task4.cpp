#include <cctype>
#include <iostream>

bool is_palindrome(const char* s) {
    int left = 0;
    int right = 0;

    while (s[right] != '\0') {
        ++right;
    }
    --right;

    while (left < right) {
        char a = static_cast<char>(
            std::tolower(static_cast<unsigned char>(s[left]))
        );
        char b = static_cast<char>(
            std::tolower(static_cast<unsigned char>(s[right]))
        );

        if (a != b) {
            return false;
        }

        ++left;
        --right;
    }

    return true;
}

int main() {
    std::cout << is_palindrome("Level") << ' '
              << is_palindrome("Radar") << ' '
              << is_palindrome("hello") << '\n';

    return 0;
}