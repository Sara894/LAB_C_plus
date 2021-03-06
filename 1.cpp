/* Определим в целочисленной матрице номер строки,
 которая содержит наибольшее количество элементов, равных 0:  */

#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

int main()
{
    //задаем максимальное допустимое количество строк и столбцов
    const int MAX_ROW_COUNT = 100;
    const int MAX_COL_COUNT = 100;
    //задаем массив arr
    int arr[MAX_ROW_COUNT][MAX_COL_COUNT];
    //определяем переменные для количества строк и столбцов
    //начальных строк ис толбцов
    //которые реально используются
    //для хранения элементов в массиве arr
    int nRows, nCols;
    srand(time(NULL));
    //вводим размеры матриц (количество строк и столбцов)
    cout << "Enter matrix sizes" << endl;
    cout << "  rows count : ";
    cin >> nRows;
    cout << " cols count : " << endl;
    cin >> nCols;
    cout << "Enter matrix : " << endl;
    for (int i = 0; i < nRows ; i++){

        for (int j = 0; j<nCols ; j++)
             cin>> arr[i][j];
           // arr[i][j] = rand()%100;
    }

      for (int i = 0; i<nRows; i++){
        for (int j = 0; j<nCols; j++)
         cout<<i<<"   "<<j<<"   "<<arr[i][j+1]<<endl;
    }
    // определяем переменные необходимые для вычислений
    // текущий индекс строки, содержащий максимальное количество нулей
    int max0RowIndex = 0;
    // количество нулей в max0RowIndex-й строке матрицы
    int max0Count = 0;
    // внешний цикл перебирает все индексы строк матрицы
    for (int i = 0; i<nRows; i++)
    {
        // данная переменная используется для подсчета числа нулей
        // в очередной i-oй строке 
        int cur0Count = 0;
        // пробегаемся по всем элементам i-oй строки для этого
        // j принимает во вложенном цикле все возможные индексы столбцов
        for(int j = 0; j<nCols; j++)
              // если очередной элемент равен 0, то 
              if (arr[i][j] == 0)
                 cur0Count++; //увеличиваем счетчик количества таких элементов на 1
        //если количество 0 в текущей строке превышает максимальное число нулей то
        if (cur0Count > max0Count)
        {
            //сохраняем количество нулей в текущей строке как максимальное
            max0Count = cur0Count;
            max0RowIndex = i;
        }
    }

    //Выводим на экран какая строка содержит максимальное количество нулей.
	cout << "Row " << max0RowIndex << " contains " << max0Count << " zero(es)." << endl;
	return 0;
}
