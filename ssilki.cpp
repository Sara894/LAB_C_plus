#include <iostream>
using namespace std;
//пишем фунцию swap

void swap(int &x,int &y){
    int t = x;
    x = y;
    y = t;
    //но это же локальные переменные, что делвть
}
int main(){
    int x =10;
    int y = 30;
    cout<<"X: "<< x<< endl;//10 ничего не меняется)
    cout<<"Y: "<< y<< endl;//30 ничего не меняется)
   
    // использовать ссылки &?
     swap(x,y);
      cout<<"X: "<< x<< endl;//опять 10 ничего не меняется)
    cout<<"Y: "<< y<< endl;//опять 30 ничего не меняется)
    // нужно менять функцию swap чтобы принимала указатели


}
