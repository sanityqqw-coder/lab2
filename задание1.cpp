#include <iostream>
#include <cmath>
int main() {
    int x, y;
    std::cout << "Введите два числа: ";
    std::cin >> x >> y;

    int tempx = std::abs(x);
    int tempy = std::abs(y);

    long long countsx = 0;
    long long countsy = 0; 

    while (tempx > 0) {
        int digit = tempx % 10;
        tempx /= 10;
        countsx += (long long)std::pow(10, digit*2);
    }

    while (tempy > 0) {
        int digit = tempy % 10;
        tempy /= 10;
        countsy += (long long)std::pow(10, digit*2);
    }

    if (countsx != countsy) {
        std::cout << "Цифры различны";
    } else {
        std::cout << "Цифры одинаковы";
    }
}