#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
//заполнение и создание двумерного динамического массива
int main(){

    srand(time(NULL));

    int rows = 5;
    int cols = 6;

    int **arr = new int* [rows]; // задаем тип указатель на указатель
    // массив указателей количеством rows

    for (int i = 0; i<rows ; i++)
    {
        arr[i] = new int[cols];
    }

    //заполнение массива

    for (int i = 0; i<rows; i++){
        for (int j = 0; j< cols; j++){
            arr[i][j] = rand()%2222;
        }
    }

    for (int i = 0; i<rows; i++){
        for (int j = 0; j<cols; j++)
        {
            cout << arr[i][j]<<"\t";
            
        }
        cout<< endl;
    }
    

    for (int i = 0; i<rows; i++){
        delete [] arr[i];// очищение памяти
    }


    delete[] arr;// очищение памяти

}