#include <iostream>

struct Packet {
    char type;
    double value;
    char flags;
    int id;
};

struct OptimizedPacket {
    double value;
    int id;
    char type;
    char flags;
};

int main() {
    std::cout << sizeof(Packet) << ' '
              << sizeof(OptimizedPacket) << '\n';

    return 0;
}