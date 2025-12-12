#include <iostream>
using namespace std;

int main(){
    int nilai = 0;

    cout << "Masukkan nilai Anda: ";
    cin >> nilai;
    if(nilai >= 60){
        cout << "Anda lulus" << endl;
    } else if(nilai >= 40 && nilai < 59){
        cout << "Anda Remidi" << endl;
    } else {
        cout << "Nilai Anda C" << endl;
    }
    
}