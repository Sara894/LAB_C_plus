//программа вычисляющая целые числа в заданном диапозоне

#include <iostream>
using namespace std;

int CheckPrimeNumber(int);// предварительное обЪявление функции

int main(){
    int n1, n2;
    bool flag;
    cout << "Введите два целых положительных числа";
    cin>>n1>>n2;

    cout << "Простые числа между "<< n1 << " и "<< n2<< endl;

    for (int i = n1 + 1; i < n2;i++){

        // если i - простое число, то flag = 1
        flag = CheckPrimeNumber(i);
        if (flag==1)
        cout <<i<< endl;

    } 
    return 0;


}

int CheckPrimeNumber(int n){

    bool flag = true;

    for (int j = 2; j < n/2;++j)
    {

        if (n % j == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}
