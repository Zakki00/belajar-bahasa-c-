#include <iostream>
using namespace std;

void faktorial(int n)
{
    int hasil = 1;
    for (int i = 1; i <= n; i++)
    {
        hasil = hasil * i;
        cout << "Faktorial dari " << i << " adalah " << hasil << endl;
    }
}

int main(){
   faktorial(5);
   return 0;
}
