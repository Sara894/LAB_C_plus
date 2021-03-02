#include <iostream>
using namespace std;

int main(){
    int sample[10];

    int t;
//помещаем в массив значения
    for(t ; t< 10; ++t ) sample[t] = t;
    for (t=0; t<10; ++t) cout << sample[t] << ' ';
    return 0;

}