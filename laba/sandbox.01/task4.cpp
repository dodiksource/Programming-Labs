#include <iostream>
#include <iomanip>

int main() {
    double a = 0.1;
    double b = 0.2;
    double sum = a + b;
    
    std::cout << "0.1 + 0.2 == 0.3? " << std::boolalpha << (sum == 0.3) << "\n";
    std::cout << std::setprecision(17) << "Actual sum: " << sum << "\n";
    return 0;
}