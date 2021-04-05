#include <iostream>
using namespace std;
// null nullpointer
int main(){
    int a = 355;
    int *pa = &a;
    cout<< *pa << endl;


    int *pb = new int (999);
    cout<< *pb << endl;
    cout<< pb << endl;

    delete pb;
    pb = 0; // nullpointer если это не написать будет ошибка в 21 строке
    //or
    //pb =NULL; //macross

    cout<< pb << endl;

    delete pb;


}