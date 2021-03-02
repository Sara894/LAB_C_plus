#include <iostream>
using namespace std;

int CheckPrimeNumber(int); //это объявление функции

int main(){

    int n;
    cout << "Введите положительное число";

    cin>>n;


    if (CheckPrimeNumber(n) == true)
       cout<< "Это простое число " << n;
    else
       cout<< "Это не простое число " << n;
    cout<<endl;
    return 0;

}

int CheckPrimeNumber(int n){//определение функции

    bool flag = true;

    for (int i = 2;i<= n/2;++i)
    {
        if (n%i == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;

}