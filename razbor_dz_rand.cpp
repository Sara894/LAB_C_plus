#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main(){
    setlocale(LC_ALL, "ru");
    const int SIZE = 10;
    int arr[SIZE];
    bool alreadyThere;

    for (int i = 0; i < SIZE;)
       {
           alreadyThere = false;
           int newRandomValue = rand()%20;
           for (int j =0; j<i; j++){
               if (arr[j] = newRandomValue){
                   alreadyThere = true;
                   break;
               }

               if(alreadyThere = false){
                   arr[i] = newRandomValue;
                   i++;
               }
           }
            arr[i] = rand()% 20;
       }
    for (int i = 0; i < SIZE; i++)
        cout<< arr[i]<<endl;

}