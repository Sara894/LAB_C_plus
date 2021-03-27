#include <iostream>
using namespace std;


int main()
{
    //объявление массива динамического
    //с помощью указателя и операторов new delete
    int *p = new int[3];
    p[1] = 100;
    cout << p << endl;    //0x1f1940
    cout << *p << endl;   //-1163005939
    cout << p[0] << endl; //-1163005939
    cout << p[1] << endl; //100
    cout << p[2] << endl; //-1163005939
    delete[] p;           //так очищаем память от массива указателей
    //delete[] pp;// идентификатор pp не определен
    //delete[] p, pp;// идентификатор pp не определен
}