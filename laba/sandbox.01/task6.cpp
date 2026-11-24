#include <iostream>
#include <cstdint>

int main() {
    std::uint8_t clean_mem[8]{}; // Ініціалізовано нулями
    std::uint8_t dirty_mem[3];   // Без {} — сміття зі стеку

    std::cout << "Clean: " << (int)clean_mem[2] << " " << (int)clean_mem[10] << "\n";
    std::cout << "Dirty: " << (int)dirty_mem[2] << " " << (int)dirty_mem[1] << "\n";
    return 0;
}
