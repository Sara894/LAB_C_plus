#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main(){
    setlocale(LC_ALL, "ru");
    const int ROWS = 5;
    const int COLS = 8;

    int arr[ROWS][COLS];

    for (int i = 0; i<ROWS; i++){
        for (int j = 0; j<COLS; j++)
          {
              arr[i][j] = rand()% 100;
          }
    }

      for (int i = 0; i<ROWS; i++){
        for (int j = 0; j<COLS; j++)
          { 
              cout<< arr[i][j]<<endl;
          }
          cout<<endl;

      }
}