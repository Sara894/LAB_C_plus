#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main(){
    const int SIZE = 10;
    int arr[SIZE];
    srand(time(NULL));

    for (int i = 0; i<SIZE; i++)
       {
          
           arr[i] = rand()%100;
           cout<<arr[i]<<endl;
       }

int min_arr = arr[0];
for (int i = 0; i<SIZE; i++){
    if (arr[i]<min_arr)
      {
           min_arr = arr[i];
      }
}

   cout<<"Min: "<<min_arr << endl;


  
}