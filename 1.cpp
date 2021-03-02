/* Вариант 8. В одномерном массиве, состоящем из N целых чисел,
 вычислить:
1. количество элементов массива, 
превышающих значение M;
2. произведение элементов массива
 между первым и последним четными элементами.*/
 #include <iostream>
 using namespace std;

 int main()
 {   
     int *arr; 
     /* указатель для выделения памяти под массив */
     int M;
     cout<< "Введите M "<< endl;
     cin>> M;
     int size; 
     cout<<"Введите размер массива "<< endl;
     cin>> size;
     if (size<=0){
         cerr<<"Invalid size"<< endl; 
         /* стандартный поток вывода сообщений об ошибках (stderr в С) */
         return 1;
     }
     arr = new int[size]; /* выделение памяти под массив */
      
      for (int i=0;i<size;i++)
      {
          cout<< "arr["<< i << "]"<< endl;
          cin>> arr[i];
      }
      int temp=0; /* временная переменная для подсчета чисел > M */
      for (int i=0;i<size;i++)
      {
         
              if (arr[i]>M)
              { 
                  temp+=1; 
              }
          
      }
      cout << temp<< endl;
 }