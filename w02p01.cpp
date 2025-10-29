#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "x=";
    cin >> x;
    if (x % 2 == 0)
        cout << "Liczba parzysta" << endl;
    else
        cout << "Liczba nieparzysta" << endl;
    return 0;
}