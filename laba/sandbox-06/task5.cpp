#include <iostream>

struct Point {
    int x;
    int y;
};

int main() {
    Point* points = new Point[3];

    int sum = 0;

    for (int i = 0; i < 3; ++i) {
        points[i].x = i + 1;
        points[i].y = 0;

        sum += points[i].x;
    }

    std::cout << sum << '\n';

    delete[] points;
    points = nullptr;

    return 0;
}