#include <iostream>
using namespace std;
//Указатели и массивы . Арифметика указателей
int main(){

    const int SIZE = 5;
    int arr[SIZE]{1,2,3,4,5};

    for(int i=0; i< SIZE; i++)
    {
        cout<< arr[i]<< endl;
    }

     int *pArr = arr;

     cout<< "arr: "<< arr<< endl;
     cout<< "pArr: "<< pArr << endl;
       for(int i=0; i< SIZE; i++)
    {
        cout<< *(arr+i)<< endl;
    }

}