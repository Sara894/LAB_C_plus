
#include <iostream>
using namespace std;
// прототип функции
void foo();
void foo2(int,int);
int main(){
    setlocale(LC_ALL, "ru");
    foo();
}

void foo(){
    cout<<"Я функция! "<<endl;
    foo2(4,5);
}
void foo2(int a,int b){
    cout << "foo2"<< endl;
    cout<< a<<b<<endl;
}