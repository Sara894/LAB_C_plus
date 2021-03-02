//Алгоритм сортировки пузырьком или прямым обменом
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int nums[10];
    int a,b,t;
    int size;

    size = 10;// количество элементов, подлежащих сортировке

    // помещаем в массив случайные числа
    for (t=0; t<size; t++) nums[t]= rand();
    //отображаем исходный массив
    for (t=0; t<size; t++) cout<<nums[t]<<endl;

    //реализация метода пузырьковой сортировки
    for (a=1; a<size; a++)
      for(b=size-1; b>=a; b--){
          if (nums[b-1] > nums[b]){ // элементы неупорядочены
          //меняем элементы местами
          t = nums[b-1];
          nums[b-1] = nums[b];
          nums[b] = t;
              
          }
      }//конец пузырьковой сортировки
      cout<<"Отсортированный массив"<<endl;
      for (int t=0; t<10; t++) cout<<nums[t]<<endl;
      return 0;
}
