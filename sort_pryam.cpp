#include <iostream>
#include <stdio.h>
#include <stdlib.h>
 #include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
 const int N = 10;
 int a[N] = { 12, 5, 3, 2, 45, 96, 6, 8, 11, 24 };
 
 int buff = 0; // для хранения перемещаемого значения
 int i, j; // для циклов 
 
 /************* Начало сортировки *******************/
 for (i = 1; i < N; i++)
 {
 buff = a[i]; // запомним обрабатываемый элемент
 // и начнем перемещение элементов слева от него
 // пока запомненный не окажется меньше чем перемещаемый
 for (j = i - 1; j >= 0 && a[j] > buff; j--)
 a[j + 1] = a[j]; 
 
 a[j + 1] = buff; // и поставим запомненный на его новое место 
 }
 /************* Конец сортировки *******************/
 
 for (int i = 0; i < N; i++) // вывод отсортированного массива
 cout << a[i] << '\t';
 cout << endl;
}