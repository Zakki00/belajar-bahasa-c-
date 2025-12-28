#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string nama;

    cout << "Masukkan nama: ";
    getline(cin, nama);

  

    for (size_t i = 0; i < nama.length(); i++)
    {
        if(i == 0 || nama[i - 1] == ' ')
        {
            nama[i] = toupper(nama[i]);
        }
        else
        {
            nama[i] = tolower(nama[i]);
        }
     
    }

    cout << "Hasil: " << nama << endl;

    return 0;
}
