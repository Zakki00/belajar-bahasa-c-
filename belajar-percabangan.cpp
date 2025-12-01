#include <iostream>
using namespace std;

int main(){
    // seleksi kondisi if tunggal
    float nilai;
    cout << "Masukkan nilai Anda: ";
    cin >> nilai;
    if(nilai >= 60){
        cout << "Selamat Anda lulus" << endl;
    }

    // seleksi kondisi if-else (majemuk)
    if(nilai >= 60){
        cout << "Selamat Anda lulus" << endl;
    } else {
        cout << "Maaf Anda tidak lulus" << endl;
    }

    // seleksi kondisi if-else if-else (bersarang)
    if(nilai >= 60){
        cout << "Anda lulus" << endl;
    } else if(nilai >= 40 && nilai < 59){
        cout << "Anda Remidi" << endl;
    } else {
        cout << "Nilai Anda C" << endl;
    }


    // seleksi kondisi switch-case
    int pilihan;
    cout << "Pilih menu (1-3): ";
    cin >> pilihan;
    switch(pilihan){
        case 1:
            cout << "Anda memilih menu 1" << endl;
            break;
        case 2:
            cout << "Anda memilih menu 2" << endl;
            break;
        case 3:
            cout << "Anda memilih menu 3" << endl;
            break;
        default:
            cout << "Pilihan tidak valid" << endl;
    }
}