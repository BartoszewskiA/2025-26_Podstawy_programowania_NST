#include <iostream>

using namespace std;

int main()
{
    int x, y;
    double wynik;
    cout << "x=";
    cin >> x;
    cout << "y=";
    cin >> y;
    wynik = (double)x / y;
    cout << "Wynik=" << wynik << endl;
    return 0;
}