#include <iostream>
using namespace std;

int main(){
    const int x = 3;
    int y = 8;
   // x = y; выдаст ошибку тк это константа
   y = x;
   cout<< y<< endl;//3
   y =  80;
cout<< y<< endl;//80
//int& z = x; error тк z типа можно менять а x нельзя
//cout<<z << endl;
const int& z = x;//а так можно ведь теперь z менять нельзя
cout<< z << endl;

const int tt = y;
cout<< tt << endl;

const int& v =  566;
cout<<v<<endl;

//комбинация const c указателями
const int* p = new int(999);
cout<< "*p: "<< *p<< endl;
/* p будет указателем на константу
р не является константой, ее можно менять
но *р менять нельзя */
p = p + 6;
cout<<"p+6 "<< p << endl;
cout<<"*p "<< *p << endl;
cout<<"*(p-6): " <<*(p-6) <<endl;
const int h = *p +8 ;
cout<< "*p + 8:  "<< h << endl;
cout<<"*(p-6)+100: " <<*(p-6)+100 <<endl;

// как сделать константый указатель
// чтобы не то что под указателм было константой
// а сам указаетль был константой
int const &yu = 889;



}