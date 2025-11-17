#include <iostream>
using namespace std;

int main()
{
    string barang;
    int harga;
    int jumlah;
    int total;
    int diskon;
    cout << "Masukkan nama barang: ";
    cin >> barang;
    cout << "Masukkan harga barang: ";
    cin >> harga;
    cout << "Masukkan jumlah barang: ";
    cin >> jumlah;

    total = harga * jumlah;
    if(total > 100000){
        total = total - ( total * 10 / 100); // diskon 10%
    }else{
        diskon = 0;
    }
    cout << "Nama barang    : " << barang << endl;
    cout << "Harga barang   : " << harga << endl;
    cout << "Jumlah barang  : " << jumlah << endl;
    cout << "Total harga    : " << total << endl;
    cout << "Diskon         : " << diskon << endl;
    cout << "Total bayar    : " << total - diskon << endl;

    return 0;
}
