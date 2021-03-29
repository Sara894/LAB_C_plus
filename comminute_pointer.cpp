#include <iostream>
using namespace std;
//передача аргументов по указателю
// как вернуть два и больше элементов из функции

void Foo(int *pa,int *pb,int *pc){
    (*pa)=555;
    (*pb)++;
    (*pc)=-20;
   
}
int main(){
    int a =0, b = 0, c = 1;
    cout<< a << endl;
    cout<< b << endl;
    cout<< c << endl;
    cout<< "Foo: " << endl;
    Foo(&a,&b,&c);
    cout<< a<< endl;
    cout<< b << endl;
    cout<< c << endl;



}