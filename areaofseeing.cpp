//область видимости. Глобальные и локальные переменные
#include <iostream>
using namespace std;
//объявим глобальную переменную b
long long int  b;// она инициализируется не мусором, а значением по умолчанию для int это 0

int foo(long long int b){
    cout<< ++b<< endl; //данная функция не будет работать с глобальной переменной
    //она будет работать с переданным ей параметром
}
int main()
{
    setlocale(LC_ALL, "ru");

    if (true)
    {
        int a = 0;
        b = 598845377674;// но здесь мы задаем ей значение
    }

    
       // cout << a << endl; //ошибка тк область видимости у а другая
       cout<< b << endl; // без строки 14 получим 0
       
       foo(7678);
       foo(b);// если не написать перед параметром b в объявлении функции Long long функция foo задаст b значение мусора
    
}
