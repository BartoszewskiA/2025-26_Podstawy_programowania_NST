#include <iostream>

using namespace std;
// zmienne globalne

// deklaracje (nagłówki) funkcji
void wczytaj(int tab[]);
void wypisz(int tab[]);
void modyfikuj(int t[]);

// funkcja startowa
int main()
{
    int tab[5];
    wczytaj(tab);
    wypisz(tab);
    modyfikuj(tab);
    wypisz(tab);
    return 0;
    // tab < = > &tab[0]
}

// pozostałe funkcje
void wczytaj(int tab[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << "tab[" << i + 1 << "]=";
        cin >> tab[i];
    }
}

void wypisz(int tab[])
{
    cout << "{";
    for (int i = 0; i < 5; i++)
    {
        cout << tab[i] << ",";
    }
    cout << "}" << endl;
    return;
}

void modyfikuj(int t[])
{
    for (int i = 0; i < 5; i++)
        if (t[i] < 0)
            t[i] = 0;
}