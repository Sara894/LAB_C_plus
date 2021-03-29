#include <iostream>
using namespace std;
//реализация функции типа swap
void foo(int *pa, int *pb){
    int t = (*pa);
    (*pa)=(*pb);
    (*pb)=t;
}
int main(){

    int a = 888;
    int b = 1;
    foo(&a,&b);
    cout<< a<< endl;
    cout<< b << endl;

}