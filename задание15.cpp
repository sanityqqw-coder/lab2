#include <iostream>
#include <cmath>
int main() {
    int a;
    int b;
    std::cout<<"Введите два числа: ";

    while (!(std::cin >> a >> b) || a < 0 || b < 0 || std::cin.peek() != '\n') {
        std::cout << "Ошибка! Введите два целых неотрицательных числа: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    if(a>b){std::swap(a , b);}
    std::cout<<"Числа удовлетворяющие условию: \n";
    while(a <= b){
        int k = 0;
        int temp = abs(a);
        while(temp > 0){
            if(temp % 10 <= (temp / 10) % 10){
                ++k;
                break;
            }
            temp = temp / 10;
        }
        if (k == 0 and abs(a)>9){std::cout<<a<<"\t";}
        ++a;
    }
    return 0;
}