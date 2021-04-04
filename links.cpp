#include <iostream>
using namespace std;
//ссылки-это переменная,хранящая адрес
int main(){

    int a = 3434;
    int *pa = &a;
    int &aRef = a;

    cout<< pa << endl;//0x61fe0c
    pa++;
    cout<< pa << endl;//0x61fe0c

    cout<< aRef<< endl;//3434

    aRef=aRef+39324;
    cout<< aRef<< endl;
    cout<< a << endl;

    int *ppa = &aRef;
    // ссылка должна быть объявлена  и инициализирована
    // она не можут ссылаться на null
    // указатель может быть обЪявлен, но не инициализирован
    // он может ссылаться на null

}