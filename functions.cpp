/* функции

возвращаемое_значение    имя_функции (параметры){
    блок_повторяющегося кода или иначе говоря тело функции
} */

#include <iostream>

using namespace std;
// в с++ обЪявление функции должно быть до её вывода 

void foo()
{
    cout<<"Функция"<<endl;
}

int Sum(int a,int b){
    return a+b;
}

int main (){
    setlocale(LC_ALL, "ru");
    foo();
   cout<< Sum(1111,234)<<endl;
}