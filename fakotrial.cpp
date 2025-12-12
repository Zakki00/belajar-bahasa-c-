#include <iostream>
using namespace std;

int main (){
   int hasil = 1;
   for (int i = 1; i <= 5; i++){
       hasil = hasil * i;
      

       if(i == 5){
           cout << "Jadi, 5! = " << hasil << endl;
       }
   }
}