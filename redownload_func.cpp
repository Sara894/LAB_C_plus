#include <iostream>
using namespace std;
/* Функции могут отличаться количеством и типом параметров, 
могут еще и внутренней реализацией
отличаться */

int Sum(int a, int b){
    a++;
    return a+b;
}
int Sum(int a,int b , int c){
    return a+b+c;
}
double Sum(double a, double b){
    return a+b;
}
int main(){
   cout<<  Sum(5.7,5.7)<<endl;
   cout<<  Sum(44,55)<<endl;
   cout<<  Sum(5.7,0.0)<<endl;
   cout<<  Sum(9,6,7)<<endl;


}