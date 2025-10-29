#include <iostream>

using namespace std;

int main()
{
    int nr;
    cout << "Podaj numer dnia tygodnia";
    cin >> nr;
    switch (nr)
    {
    case 1:
        cout << "Niedziela" << endl;
        break;
    case 2:
        cout << "Poniedzialek" << endl;
        break;
    case 3:
        cout << "Wtorek" << endl;
        break;
    case 4:
        cout << "Sroda" << endl;
        break;
    case 5:
        cout << "Czwartek" << endl;
        break;
    case 6:
        cout << "Piatek" << endl;
        break;
    case 7:
        cout << "Sobota" << endl;
        break;
    default:
        cout << "Nie ma takiego dnia tygodnia" << endl;
    }
    return 0;
}