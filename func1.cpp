#include <iostream>
using namespace std;

void Foo(int a){

    a++;
    }// создается новая переменная а и именно НОВАЯ переменная увеличивается на 1
    // старая а остается по значению прежней


int Foo1(int a){
    return a++;
}

int foo(int a){
    return ++a;
}

int main(){
    setlocale(LC_ALL,"ru");
    int a = 1;
    Foo(a) ;
    cout<<a<<endl;// выдаст 1 потому что мы передали в Foo переменную по значению

    int v = 1;
    v = Foo1(v);
    cout<<v<<endl;// все равно 1, тк а++ а это значит что v увеличилась на 1 только после вывода значения


int b = 3;
b = foo(b);
cout<<b<<endl;//а здесь увеличилось тк ++b
}