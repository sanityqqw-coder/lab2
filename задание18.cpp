#include <iostream>
#include <cmath>
int main() {
int N;
int k=0;
int p;
int number=1;
int temp;
std:: cout<<"Введите число: ";
while (!(std::cin >> N) || N <= 0 || std::cin.peek() != '\n') {
        std::cout << "Ошибка! Введите натуральное число: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
for(int i = 1; i <= N; ++i){
    if(k == N){
            break;}
    temp = i;
    int power = log10(i);
    while(power >= 0){
            p=pow(10,power);
            number = temp / p;
            temp = temp % p;
            --power;
            ++k;
             if(k == N){
            break;}
                }
            }
    std::cout<<number;
    return 0;
}