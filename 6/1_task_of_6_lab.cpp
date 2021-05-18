#include <iostream>
#include <vector>
using namespace std;
/* Вариант 8.
Задание 1. Переделать свой вариант 1-го задания лабораторной работы №6
(«Одномерные массивы, часть 2»), используя стандартный шаблонный класс vector.
Для задания/чтения размеров  использовать методы  resize()/size(),
а не отдельные переменные. 
В одномерном массиве, состоящем из N целых чисел, вычислить:
1. количество элементов массива, превышающих значение M;
2. произведение элементов массива между первым и последним четными элементами. */

int main()
{
    vector<int> vec;
    int N;
    //  char sym;
    cout << "Сколько чисел в массиве? ";
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cout << "#" << vec.size() + 1 << ": " << endl;
        int el;
        cout << "Введите целое число:  ";
        cin >> el;
        vec.push_back(el);
    }
        int result = 0;
    int M;
    cout << "Введите число М: ";
    cin >> M;
    for (int el : vec)
    {
        if (el > M)
            result += 1;
        if (el % 2 == 0)
            cout << "  " << el << "  ";
    }
    cout << "количество элементов массива, превышающих значение M:  " << result << endl;
    /*     do
    {
        cout<< "#"<< vec.size() + 1 << ": "<<endl;
        int el;
        cout<< "Введите целое число:  ";
        cin>> el;
        vec.push_back(el);
        cout<<"Хотите добавить еще элементов? Введите \'n\' если нет, \'y\' - если да: ";
        cin>> sym;
    } while (sym !='n'); */

    int first=0, last=0;
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << "  ";
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] % 2 == 0)
        {
            first = i;
            break;
        }
    }
    if (first == 0) 
    {
        cout<<"Нет четных чисел"<<endl;
        exit(1);
    }
    int j = first + 1;
    int mult = 1;
    for (j; j <= vec.size() + 1; j++)
    {
        if (vec[j] % 2 == 0)
            last = j;
    }
     if (last == 0) 
    {
        cout<<"Только одно четное число"<<endl;
        exit(1);
    }
    if(last == first +1 )
    {
        cout<<"Два четных числа - соседние."<<endl;
        exit(-1);
    }
    j = first+1;
    for (j; j < last; j++)
    {
        mult *= vec[j];
    }
    cout << "произведение элементов массива между первым и последним четными элементами " << mult << endl;

}