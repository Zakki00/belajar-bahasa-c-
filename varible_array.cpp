#include <iostream>
#include <array>
#include <string>
using namespace std;

int main()
{
   array<string, 5> buah = {"apel", "jeruk", "mangga", "pisang", "semangka"};
   array<int, 5> harga = {10000, 15000, 20000, 12000, 8000};
   
   string cari;
   cout << "Masukkan nama buah: ";
   cin >> cari;
   
   // Cari buah di array
   for(int i = 0; i < 5; i++) {
      if(buah[i] == cari) {
         cout << "Harga " << buah[i] << " = " << harga[i] << endl;
         break;
      }
   }
   
   return 0;
}