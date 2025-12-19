#include <iostream>
#include <string>

using namespace std;

int main()
{
    string imie;
    cout << "Podaj imie: ";
    getline(cin, imie);
    imie[0]=toupper(imie[0]);
    for (int i = 1; i < imie.length(); i++)
        imie[i] = tolower(imie[i]);
    cout << "zapisano: " << imie;
    return 0;
}