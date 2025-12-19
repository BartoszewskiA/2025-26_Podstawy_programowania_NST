#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    plik.open("dane.txt", ios::out);
    for (int i = 0; i < 10; i++)
        plik << i + 1 << ": " << "tekst"<<endl;
    plik.close();
    return 0;
}