/* Вариант 8. Отсортировать массив из N целых
 чисел в неубывающем порядке >= с помощью сортировки прямым выбором. */

#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

int main()
{
    int N;
    cout << "количество элементов: " << endl;

    cin >> N; // количество элементов принадлежащих сортировке
    srand(time(NULL));
    cout << "_______________" << endl;
    int arr[N];
    for (int t = 0; t < N; t++)
        arr[t] = rand() % 100;
    // реализация метода пузырьковой сортировки
    for (int t = 0; t < N; t++)
        cout << arr[t] << endl;
    cout << "_______________" << endl;
    int a;
    int b;
    int t;
    for (a = 1; a < N; a++)
        for (b = N - 1; b >= a; b--)
        {
            if (arr[b - 1] >= arr[b])// неубывающий порядок
            {
                t = arr[b - 1];
                arr[b - 1] = arr[b];
                arr[b] = t;
            }
        }

    cout << "Отсортированный массив" << endl;
    for (int t = 0; t < N; t++)
        cout << arr[t] << endl;
    return 0;
}