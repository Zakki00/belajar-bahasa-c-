#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama = "Masukan Nama Anda:";
    cout << nama << endl;

    getline(cin, nama);

    int jumlah_karekter = nama.length();
    int index = jumlah_karekter - 2 - 4;

    string hasil = nama.substr(index, 4);
    cout << "Hasil:" << hasil << endl;
}