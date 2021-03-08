#include <iostream>
#include <ctime>

using namespace std;
//двумерный массив
int main(){
    setlocale(LC_ALL, "ru");
  const int ROW = 4;
    const int COL = 2;

    int arr[ROW][COL]{
        {1,2},
        {45,66},
        {22,322},
        {234,311}
        };
  //  arr[0][1] = 14;

    cout << arr[3][0]<< endl;
}