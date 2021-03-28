#include <iostream>
using namespace std;
//шаблоны функций
//шаблонной функции пофиг на тип переменной
// ключевое слово template

template <typename T1, typename T2> // мы не знаем какой параметр будем принимать 
 T1 Sum(T1 a, T2 b){
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