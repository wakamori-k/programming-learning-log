#include <iostream>

int main() {
    int y;
    std::cin >> y;

    if (y % 4 <= 2) {
        std::cout << y + (2 - y%4) << std::endl;
    } else {
        std::cout << y + 3 << std::endl;
    }
    return 0;
}