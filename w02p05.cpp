#include <iostream>

using namespace std;

int main()
{
    int ile;
    int liczba;
    cout << "ile liczb: ";
    cin >> ile;
    int suma = 0;
    for(int i=0; i<ile; i++)
    {
        cout << "Podaj liczbe: ";
        cin >> liczba;
        suma =suma + liczba;
    }
    cout << "Suma: " << suma << endl;
    return 0;
}