#include <iostream>

using namespace std;

int main()
{
    int liczba, suma = 0;
    do
    {
        cout << "x= ";
        cin >> liczba;
        if(liczba >= 0)
            suma = suma + liczba;
    } while (liczba >= 0);
    cout << "Suma: " << suma << endl;
    return 0;
}