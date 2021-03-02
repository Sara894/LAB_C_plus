// число как сумма двух простых чисел

#include <iostream>
using namespace std;

bool CheckPrime(int);

int main(){
    int n,i;
    bool flag = false;

    cout << "Введите положительное целое число";

    cin>> n;

    for (i = 2; i< n; i++){

        if (CheckPrime(i)){
            if(CheckPrime(n-i)){
                cout << n << " = "<< i << " + "<< n-i<< endl;
                flag  = true;
            }
        }
    }

    if(!flag)
       cout<< "Не может быть выражено как сумма простых чисел"<< endl;
       return 0;
}

bool CheckPrime(int n){
    int i;
    bool isPrime = true;

    for (i = 2; i<n ; ++i){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }
    return isPrime;
}