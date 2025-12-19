#include <iostream>

using namespace std;

int dodaj(int a, int b);

int main()
{
    int x, y;
    cout << "x=";
    cin >> x;
    cout << "y=";
    cin >> y;

    cout<< dodaj(x,y);
    return 0;
}

int dodaj(int a, int b)
{
    int wynik = a + b;
    return wynik;
}