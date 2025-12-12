#include <iostream>
#include <array>
#include <string>

using namespace std;

array<string, 100> nama;
array<int, 100> nomor;
int jumlah_kontak = 0;
void menu();
void list_kontak()
{
    for (int i = 0; i < jumlah_kontak; i++)
    {
        cout << i + 1 << ". " << nama[i] << " - " << nomor[i] << endl;
    }
    menu();
}

void tambah_kontak()
{
    if (jumlah_kontak >= 100)
    {
        cout << "Daftar kontak penuh!" << endl;
        menu();
        return;
    }
    cout << "Masukkan nama: ";
    cin >> nama[jumlah_kontak];
    cout << "Masukkan nomor telepon: ";
    cin >> nomor[jumlah_kontak];
    jumlah_kontak++;
    cout << "Kontak berhasil ditambahkan!" << endl;
    menu();
}
void cari_kontak(string nama_cari)
{

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
    cout << "Tambah kontak (1) || cari kontak (2) || list kontak (3) || keluar (4)" << endl;
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
    }
    else if (pilihan == 3)
    {
        cout << "Daftar Kontak:" << endl;
        list_kontak();
    }
    else if (pilihan == 4)
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