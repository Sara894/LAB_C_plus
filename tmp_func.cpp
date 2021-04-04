#include <iostream>
using namespace std;

template <typename T>
T sum (T a, T b){
    return a + b;
}

int main(){

    int a =900;
    int b =100;
    int summa = sum(a,b);
    cout<< summa << endl;
    int summa1 = sum(a,a);
    cout << summa1 << endl;
     double long c =999.7555885858;
     double long d = 898.788;
     double long summa2 = sum(c,d);
    cout<< summa2 << endl;

}