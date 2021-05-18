/*  
8.Характеристикой столбца матрицы
назовем произведение элементов
с четными номерами строк.
Определить номер столбца с наибольшей характеристикой. */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> arr;
    int rowSize;
    cout << "Enter row size: ";
    cin >> rowSize;
    char sym;
    do{
        cout << "Row " << arr.size() + 1 << " :" << endl;
        vector<int> newVec;
        for(int i = 0; i < rowSize; ++i){
            cout << "#" << i + 1 << ": ";
            int el;
            cin >> el;
            newVec.push_back(el);
        }
        arr.push_back(newVec);
        cout << "Continue?(y,n):";
        cin >> sym;
    }while(sym != 'n');
    for(vector<int> vec : arr){
        for(int i = 0; i < vec.size(); ++i){
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    int mult = 1;
    int MaxMult = 0;
    int Max;
    int MM, t;
    int i = 0;
      t = arr[i].size();
        cout<<"t = "<<t<< endl;
    for(int j = 0; j < t ; j++){
         for( i = 0 ; i < arr.size(); i++)
            {
                if(i % 2 == 0){
                mult *= arr[i][j];
                cout<<" i = "<<i<<" j = "<< j <<" arr = "<<arr[i][j]<< endl;
                cout<<"arr[i].size() "<< arr[i].size()<<" i = "<<i<< endl;
            }
            }
               cout<<" произведение элементов \
с четными номерами строк столбца "<<j << " :  "<< mult<< endl;
        MM = mult;
        mult = 1;
        if (MM>MaxMult || j == 0) {
            MaxMult = MM; 
            Max = j;
        } 
    } 
      
    
    cout << "номер столбца с наибольшей характеристикой: " << Max+1 << endl;
    return 0;
}
//TODO разберись почему не работает for c arr[i].size() f c 3 работает.