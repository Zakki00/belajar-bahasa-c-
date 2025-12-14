#include <iostream>
#include <string>
#include <cpr/cpr.h>

using namespace std;
using namespace cpr;

int main()
{
    bool connected = false;

    while (!connected)
    {
        cout << "Mencoba menghubungi API..." << endl;

        auto response = Get(Url{"http://localhost:3000/status"});

        if (response.status_code == 200)
        {
            string body = response.text;

            
            if (body.find("success") != string::npos)
            {
                cout << "API berhasil dihubungi!" << endl;
                connected = true;
            }
            else
            {
                cout << "API gagal... mencoba lagi." << endl;
            }
        }
        else
        {
            cout << "Server tidak merespon, ulangi lagi..." << endl;
        }
    }

    return 0;
}
