#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main(){
    int arr[5];
    srand(25);
    for (int i = 0; i< 5; i++)
       arr[i] = rand()%45 + 5; // число от 5 до 50
    for (int i = 0;i<5; i++)
       cout<< arr[i]<<endl;
}