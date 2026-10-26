#include <iostream>
#include <cmath>
int main() {
int F=0;
int temp=1;
int N;
int sum=0;
int x;
std::cout<<"Введите число: ";
 while (!(std::cin >> N) || N <= 0 || std::cin.peek() != '\n') {
        std::cout << "Ошибка! Введите натуральное число: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
while( sum<=N)
{
    if(sum + F > N){
        break;
    }
    std::cout<< F<<" ";
    sum = sum + F;
    x = temp;
    temp = F;
    F = F + x;
}
std::cout<<"\n"<<"Сумма чисел Фибоначчи: "<<sum;
return 0;
}