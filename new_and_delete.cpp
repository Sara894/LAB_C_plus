#include <iostream>
using namespace std;
// динамическая память
// операторы выделенияпамяти new delete

int main(){
    int *a = new int(8) ;
    cout<< *a << endl;

    delete a;
    
}