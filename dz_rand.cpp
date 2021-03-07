 #include <iostream>
 #include <stdlib.h>
 #include <ctime>
 using namespace std;

 int main(){
     const int SIZE = 10;
     srand(time(NULL));

     int arr[SIZE];

     for (int i = 0; i< SIZE; i++){
        
             arr[i] = rand()%100 +i;
     }
         
       

    for (int i =0; i<SIZE; i++)
        cout<< arr[i]<< endl;

 }