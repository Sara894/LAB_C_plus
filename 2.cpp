// L.B 8-1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//2  С клавиатуры вводится строка символов, представляющая собой предложение со знаками препинания (точка, запятая, восклицательный знак).
//   Вывести на экран все слова данного предложения.

#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    char str[255];
    cout << "Введите предложение на английской раскладке" << endl;
    cin.getline(str, sizeof str); // читаем строку
  
    for (int i = 0; i < strlen(str); i++) // читаем каждый символ и убираем лишние
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'));
                        
        else
        {
            str[i] = ' ';
        }
        
    }

   cout << str << endl;

}