// вычисление ряда натуральных чисел с использованием рекурсии
#include <iostream>
using namespace std;

int add(int n);

int main(){
    int n;
    cout<< "Введите целое положительное число";
    cin>>n;
    cout<< "Сумма натуральных чисел "<<add(n)<<endl;
    return 0;
}

int add(int n){
    if (n!=0)
       return n + add(n-1);
    return 0;
}