#include <iostream>
using namespace std;
//пишем фунцию swap

int swap(int &x,int &y){
    int t = x;
    x = y;
    y = t;
    return x,y;

   
    //но это же локальные переменные, что делвть
}
int main(){
    int x =10;
    int y = 30;
    int swap(int x,int y);
    cout<<"X: "<< x<< endl;//10 ничего не меняется)
    cout<<"Y: "<< y<< endl;//30 ничего не меняется)
    //ЧТО ДЕЛАТЬ?!
    // использовать ссылки &?
    int swap(int &x,int &y);
      cout<<"X: "<< x<< endl;//опять 10 ничего не меняется)
    cout<<"Y: "<< y<< endl;//опять 30 ничего не меняется)
    // нужно менять функцию swap чтобы принимала указатели


}
