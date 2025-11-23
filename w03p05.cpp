#include <iostream>

using namespace std;

int main()
{
    const int ILE = 5;
    int ile;
    int tab[ILE];
    for (int i = 0; i < ILE; i++) // indeksy 0 do n-1
    {
        cout << "x= ";
        cin >> tab[i];
    }
    int max = INT_MIN;
    //int max = tab[0];
    for (int i = 0; i < ILE; i++)
        if (tab[i] > max)
            max = tab[i];
    cout << "Max = " << max;
    return 0;
}