#include <iostream>
using namespace std;
//https://www.youtube.com/watch?v=aj7-g13B93Q&list=TLPQMjcwMzIwMjGKaRBjm5Gr4Q&index=3
//int f(double, char*);
// как релизовать char* ??
int f (int, int);
// функции с аргументами по умолчанию
int def(int x = 1, int y = 2);

int main(){
  //  char* a;
   
   
  //  int f(0.6, a);
  //cout << *void <<endl; а это как?

 int  c= f(7,8);
 cout<< c<< endl;
 int(*p)(int,int)= &f;
 cout<< p(9,8) << endl;


int a = def(8,9000);
cout<< a<< endl;

int b = def();
cout<< b<<endl;

}
int f(int a, int b){
  int c = a+b;
  return c;
}

int def(int x , int y){
 int  t = x+y;
  return t;
}

// существуют функции с переменным числом аргументов
// функции с аргументами по умолчанию