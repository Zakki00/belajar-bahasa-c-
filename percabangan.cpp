#include <iostream>
using namespace std;

int main(){
    int nilai;
    cout << "Masukan Nilai:" << endl;
    cin >> nilai;

    if(nilai >= 0 && nilai <= 19){
        cout << "Mendaptkan Nilai E" << endl;
    }else if (nilai >= 20 && nilai <= 39){
        cout << "Mendapatkan Nilai D"  << endl;
    }else if (nilai >= 40 && nilai <= 49){
        cout << "Mendapatkan Nilai C" << endl;
    }else if( nilai >=50 && nilai <= 59){
        cout << "Mendapatkan  Nilai BC" << endl;
    }else if(nilai >= 60 && nilai <= 69){
        cout << "Mendaptkan Nilai B" << endl;
    }else if( nilai >= 70 && nilai <= 85){
        cout << "Mendaptkan Nilia AB" << endl;
    }else if (nilai >= 86 && nilai <= 100){
        cout << "Mendapatkan Nilai A" << endl;
    }else {
        cout << "Nilai Yang Anda Masukan Salah" << endl;
    }
    
}