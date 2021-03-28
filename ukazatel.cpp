#include <iostream>
using namespace std;

int main(){
    int a = 6;
    int *pa = &a;//p значит pointer, те указатель
    int *pa2 = &a;
    cout<<pa<< endl;//0x61fe14
    cout<<pa2<< endl;//0x61fe14 одинаково!!
    cout<<*pa<<endl;//6  //операция разыменования

    *pa2 = 22222;
    cout<< a<< endl; 
    cout<< *pa<< endl; 



}