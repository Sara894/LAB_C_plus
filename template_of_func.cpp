#include <iostream>
using namespace std;
//шаблоны функций
//шаблонной функции пофиг на тип переменной
// ключевое слово template

template <typename T> // мы не знаем какой параметр будем принимать 
 int Sum(T a, T b){
     return a+b;
 }


/* int Sum(int a, int b){

} */

int main(){

cout<< Sum(9,1123)<< endl;
cout<< Sum(9.0,1123.0)<< endl;
// trouble:
//разные типы параметров невозможно использовать
cout<< Sum(4.0, 988989)<<endl;
}