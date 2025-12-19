#include <iostream>

using namespace std;
// zmienne globalne
int x = 0;
int tab[5];

// deklaracje (nagłówki) funkcji
void wczytaj();
void wypisz();
void modyfikuj();

// funkcja startowa
int main()
{
    wczytaj();
    wypisz();
    modyfikuj();
    wypisz();
    return 0;
}

// pozostałe funkcje
void wczytaj()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "tab[" << i + 1 << "]=";
        cin >> tab[i];
    }
}

void wypisz()
{
    cout << "{";
    for (int i = 0; i < 5; i++)
    {
        cout << tab[i] << ",";
    }
    cout << "}" << endl;
    return;
}

void modyfikuj()
{
    for (int i = 0; i < 5; i++)
        if (tab[i] < 0)
            tab[i] = 0;
}