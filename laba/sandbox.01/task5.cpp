#include <iostream>
#include <cstring>

int main() {
    char c = 'A';
    std::cout << "Char: " << c << ", Code: " << static_cast<int>(c) << "\n";
    std::cout << "Next char: " << static_cast<char>(c + 1) << "\n";

    char str[] = {'A', 'B', '\0', 'C', 'D', '\0'};
    std::cout << "String output: " << str << "\n";
    std::cout << "sizeof(str): " << sizeof(str) << ", strlen(str): " << std::strlen(str) << "\n";
    return 0;
}
