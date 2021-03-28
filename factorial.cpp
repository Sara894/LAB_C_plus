#include <iostream>
using namespace std;
/* Факториал N!
N!=N*(N-1)! */

int Fact(int N)
{

    if (N == 0)
        return 0;
    if (N == 1)
        return 1;
    return N * (Fact(N - 1));
}

int main()
{
   cout<<  Fact(5)<< endl;
}