#include <iostream>
using namespace std;

int Foo(int a){
//логика отвечающая за выход из рекурсии 
// и изменение числа а
if (a<1)
    return 0;

a--;
cout<< a << endl;
  return  Foo(a);
}

int main()
{
    //задача которая реализуется с помощью цикла
    // может быть реализована с помощью рекурсии
    // и наоборот
    // с рекурсией удобнее вычислять факториал
    // работать  с бинарным деревом
    Foo(99);



}