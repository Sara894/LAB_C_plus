/* Задание 1. Дан двумерный массив размера n х m целых чисел. Размеры массива
 и сами элементы вводятся с клавиатуры. Определить по вариантам:
 8 . сумму тех элементов массива, сумма индексов которых кратна 3 . */

 #include <iostream>
 #include <ctime>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

int main(){
    srand(time(NULL));
    int n;//количество строк
    cout<< "количество строк   "<<endl;
    cin >> n;

    int m; //количество столбцов
    cout<< "количество столбцов:   "<<endl;
    cin >> m;
    int arr[n][m];

    //заполняем матрицу
    for (int i=0; i<n; i++){
        for(int j=0; j<m; j++)
           {
               cin>>arr[i][j];
           }
    }


    
       for (int i=0; i<n; i++){
        for(int j=0; j<m; j++)
           cout<<i<<"____"<<j<<"____"<< arr[i][j] << endl;
    }
int sum = 0;//сумма элементов сумма индексов которых кратна 3
 for (int i=0; i<n; i++){
        for(int j=0; j<m; j++)
          { 
              if ((i+j)%3 == 0)
             sum+=arr[i][j] ;
          }
    }

    cout<<"сумма тех элементов массива, сумма индексов которых кратна 3:  "<<sum<<endl;


}