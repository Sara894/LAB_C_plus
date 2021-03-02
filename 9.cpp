#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    int i, min_value, max_value;
    int list[10];

    for (i=0; i<10; i++) list[i] = rand();
    //находим минимальное значение
    min_value = list[0];
    for (i=1; i<10; i++)
       if (min_value>list[i]) min_value = list[i];

       cout<< "Минимальное значение "<< min_value<< endl; 

       //находим максимальное значение
       max_value = list[0];
       for (i=1; i<10; i++)
         if (max_value < list[0]) max_value = list[i];

         cout<<"Максимальное значение "<<max_value<<endl;
         return 0;
}