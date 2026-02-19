#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    char stop;

    do
    {
        cout << "Iterasi ke-" << i << endl;

        if (i >= 100)
        {
            cout << "Sudah mencapai 100 iterasi. Berhenti otomatis.\n";
            break;
        }

        cout << "Lanjutkan iterasi berikutnya? (y/n): ";
        cin >> stop;

        if (stop == 'n' || stop == 'N')
        {
            cout << "Loop dihentikan oleh user.\n";
            break;
        }

        i++;

    } while (true); 

    return 0;
}

