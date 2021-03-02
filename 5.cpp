// рекурсия

// вычисление факториала

#include <iostream>
using namespace std;

int factorial(int);

int main()
{
    int n;
    cout << "Введите положительное число" << endl;
    cin >> n;

    cout << "Факториал числа " << n << " равен " << factorial(n) << endl;

    return 0;
}

int factorial(int n)
{
    if (n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}
