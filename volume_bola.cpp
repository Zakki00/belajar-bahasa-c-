#include <iostream>
using namespace std;

void volume_bola(double r){
   
    double volume;
    volume = 4.0/3.0*3.14*r*r*r;
    cout << volume;

}
int main(){
    double r;
    cout << "masukan jari-jari bola : ";
    cin >> r;
    volume_bola(r);
}
