#include <iostream>

#include <string>
#include <algorithm>
#include <cctype>
using namespace std;
int main()
{
    string kata;
    getline(cin, kata);
    transform(kata.begin(), kata.end(), kata.begin(), ::tolower);
    for (int i = 0; i < kata.size(); i++)
    {
        if(i == 0 || kata[i - 1] == ' ')
        {
            kata[i] = toupper(kata[i]);
        }
    }
    cout << "Hasil: " << kata << endl;
    
    return 0;
}