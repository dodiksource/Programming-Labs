#include <iostream>

int hex_digit(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0';
    }

    if (c >= 'a' && c <= 'f') {
        return c - 'a' + 10;
    }

    if (c >= 'A' && c <= 'F') {
        return c - 'A' + 10;
    }

    return -1;
}

int hex_value(const char* s) {
    if (s[0] != '0' || s[1] != 'x' || s[2] == '\0') {
        return -1;
    }

    int value = 0;

    for (int i = 2; s[i] != '\0'; ++i) {
        int digit = hex_digit(s[i]);

        if (digit < 0) {
            return -1;
        }

        value = value * 16 + digit;
    }

    return value;
}

int main() {
    std::cout << hex_value("0x41") << ' '
              << hex_value("0xff") << ' '
              << hex_value("0x1A2") << '\n';

    return 0;
}