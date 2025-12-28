#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string kata;
    cin >> kata;
    transform(kata.begin(), kata.end(), kata.begin(), ::tolower);
    cout << kata << endl;
    return 0;
}