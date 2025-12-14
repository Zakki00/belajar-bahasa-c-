#include <iostream>
using namespace std;

int main(){
  int i = 10;
  while(i >= 1){
   if(i % 2 == 0){
    cout << i << " Bilangan Genap" << endl;
   }else {
    cout << i << " Bilangan Ganjil" << endl;
   }
   i--;
  }
}