#include <iostream>
using namespace std;

int main(){
    int nilai = 10;
    string nama = "Alice";
    double tinggi = 5.7;

    int*  pnilai = &nilai;
    string* pnama = &nama;
    double* ptinggi = &tinggi;

    cout << "Nilai: " << nilai << ", Alamat: " << pnilai << endl;
    cout << "Nama: " << nama << ", Alamat: " << pnama << endl;
    cout << "Tinggi: " << tinggi << ", Alamat: " << ptinggi << endl;
}