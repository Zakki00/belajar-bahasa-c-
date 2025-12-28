#include <iostream>
using namespace std;

int main(){
    string buah[5] = {"Mangga", "Apel", "Melon", "Anggur", "Alpukat"};
    for(int i = 0; i < 5; i++){
        cout << "Index ke- "<< i << " : " << buah[i] << endl;
    }
}