#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main(){
    int size;
    cin>> size;
    srand(time(NULL));

    int *parr = new int[size];
for(int i=0;i<size;i++)
   {
        parr[i]=rand()%255;
   }
    for(int i=0;i<size;i++)
       {cout<< (parr[i])<<"\t";
       cout<< parr + i << endl;
       }

    delete[] parr;
}