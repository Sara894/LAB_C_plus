#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
//передача массива в функцию
void fillArray(int arr[], const int size)
{
    for (int i = 0; i<size; i++){
        arr[i] = rand()%10;
    }

}

void entArray(int arr[], const int size){
    for (int i = 0; i< size; i++)
    {
        cout<< arr[i]<<endl;
    }
}
int main(){
    srand(time(NULL));
    setlocale(LC_ALL, "ru");
    
    const int SIZE = 10;
    int arr[SIZE];

    fillArray(arr, SIZE);
    entArray(arr,SIZE);

}