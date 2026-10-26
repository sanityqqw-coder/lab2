#include <iostream>
#include <cmath>
int main() {
    int N;
    std::cout<<"Введите натуральное число N: ";  
    while (!(std::cin >> N) || N <= 0 || std::cin.peek() != '\n') {
        std::cout << "Ошибка! Введите натуральное число: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    std::cout<<"Числа Армстронга меньшие данного числа: ";
    for(int i = 1; i <= N; i++){
        int k = log10(i) + 1;
        int temp = i;
        int sum = 0;
        while(temp > 0){
            sum += pow(temp % 10,k);
            temp = temp / 10;
        }
        if(sum == i){
            std::cout<<i<<"\t";
        }
    }
    return 0;
}