#include <iostream>
using namespace std;



void faktorial(int n){
    int hasil = 1;
    for (int i = 1; i <= n; i++){
        hasil = hasil * i;
        cout << "hasil dari fakorial " << i << " adalah " << hasil << endl;
    }
}

void mencetak_bintang(int n){
    for (int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
       
    }
}
void dasar_loping(){
    // for loop
    for(int i = 1; i <= 10; i++){
        cout << i << endl;
    }

    // while loop
    int j = 1;
    while(j <= 10){
        cout << j << endl;
        j++;
    }
    
    // do while loop
    int k = 1;
    do{
        cout << k << endl;
        k++;
    }while(k <= 10);


}

int main(){
//    faktorial(5);
   mencetak_bintang(5);
   return 0;
}
