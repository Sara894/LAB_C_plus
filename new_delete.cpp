#include <iostream>
using namespace std;

int main(){
    //new type Оперативная память, дай мне столько памяти, сколько надо для данного типа
    //хорошо, но я верну тебе переменную типа int*
   {
       int*  p = new int (8);
        cout<< p << endl;//0x741940
        cout<<*p<<endl;//8
         cout<<"__________________"<<endl;
  
   }
   int* p;
   cout<< p << endl;//0xdd1890
   cout<<*p<<endl;//14489569
}