#include <iostream>
#include <array>
#include <string>

using namespace std;

void tambah_kontak()
{
    array<string, 100> nama;
    array<int, 100> nomor;
    int jumlah_kontak = 0;
    if (jumlah_kontak >= 100)
    {
        cout << "Daftar kontak penuh!" << endl;
        return;
    }
    else
    {
        cout << "Masukkan nama: ";
        cin >> nama[jumlah_kontak];
        cout << "Masukkan nomor telepon: ";
        cin >> nomor[jumlah_kontak];
        jumlah_kontak++;
        cout << "Kontak berhasil ditambahkan!" << endl;
    }
    menu();
}
void cari_kontak(string nama_cari)
{
    array<string, 100> nama;
    array<int, 100> nomor;
    int jumlah_kontak = 0;
    bool ditemukan = false;
    for (int i = 0; i < jumlah_kontak; i++)
    {
        if (nama[i] == nama_cari)
        {
            cout << "Nomor telepon: " << nomor[i] << endl;
            ditemukan = true;
            break;
        }
    }
    if (!ditemukan)
    {
        cout << "Kontak tidak ditemukan!" << endl;
    }
    menu();
}

void menu()
{
    int pilihan;
    cout << " pilih menu " << endl;
    cout << "Tambah kontak (1) || cari kontak (2) || keluar (3)" << endl;
    cin >> pilihan;
    if (pilihan == 1)
    {
        tambah_kontak();
    }
    else if (pilihan == 2)
    {
        string nama_cari;
        cout << "Masukkan nama yang dicari: ";
        cin >> nama_cari;
        cari_kontak(nama_cari);
    }else if (pilihan == 3)
    {
        cout << "Keluar dari program." << endl;
    }
    else
    {
        cout << "Pilihan tidak valid" << endl;
    }
}
int main()
{
    menu();
    return 0;
}