/* Задание 1. Дан двумерный массив размера n х m целых чисел.
 Размеры массива и сами элементы вводятся с клавиатуры. Определить по вариантам: 
 сумму тех элементов массива, сумма индексов которых кратна 3. */
 #include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> arr;
    char sym;
    do{
        cout << "#"  << arr.size() + 1 << ":" << endl;
        vector<int> newVec;
        cout << "Enter row sizes: ";
        int rowSize;
        cin >> rowSize;
        for(int i = 0; i < rowSize; ++i){
            cout << "{" << i + 1 << "}: ";
            int el;
            cin >> el;
            newVec.push_back(el);
        }
        arr.push_back(newVec);
        cout << "Continue?(y,n): ";
        cin >> sym;
    }while(sym != 'n');
    int result = 0;
    int j = 0;
    for(vector<int> vec : arr){
        for(int i = 0; i < vec.size(); ++i){
            cout <<" j = "<<j<<" i = "<< i <<" | el ="<< vec[i] << "   ";
            if((i + j) % 3 == 0) result += vec[i];
        }
        j++;
        cout << endl;
    }
    cout << "Result: " << result << endl;
    return 0;
}
