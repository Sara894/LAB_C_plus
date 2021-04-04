#include <iostream>
using namespace std;
// написать шаблонную функцию менябщую местами две переменные

template <typename T1, typename T2>
T1 swap(T1 a, T1 b){
    T1 t = a;
    a = b;
    b = t;
}
int main(){

    int a = 90;
    int b = 788888;
    swap(a, b);
    cout << "a "<< a << endl;
    cout << "b "<< b << endl;



}