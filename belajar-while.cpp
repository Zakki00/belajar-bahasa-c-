#include <iostream>
using namespace std;

int main()
{
   int angka = 1;

   // while akan mengecek kondisi dulu sebelum menjalankan isi loop
   while (angka <= 5)
   {
      cout << "While: angka = " << angka << endl;
      angka++; // increment
   }

   return 0;
}
