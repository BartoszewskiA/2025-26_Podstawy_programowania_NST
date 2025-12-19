#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    string s;
    plik.open("dane.txt", ios::in);
    if (!plik.good())
    {
        cout << "Blad plik";
        return 0;
    }
    cout << "Plik otwarty:" << endl;
    while (!plik.eof())
    {
        getline(plik, s);
        cout << s << endl;
    }

    plik.close();
    return 0;
}