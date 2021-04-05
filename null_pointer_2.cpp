#include <iostream>
using namespace std;


template <typename T>
void pointer_null(T *pa){
    if (pa = nullptr)
       cout<<"NULL POINTER"<< endl;
    else if(pa == 0)
       cout<< "pa = 0"<< endl;
    else 
       cout<< "POINTER NOT NULL"<< endl;
}

int main(){
    int *pa = new int (888);
    cout << *pa << endl;
    delete pa;

    pa  = nullptr;// это отдельный тип данных
    // компилятор никогда не перепутает его с int
    // лучше при работе с указателями использовать именно его
    cout << pa << endl;//0

    int *pb = new int(777777);
    delete pb;
    pb = 0;

    pointer_null(pa);
    pointer_null(pb);
    


}