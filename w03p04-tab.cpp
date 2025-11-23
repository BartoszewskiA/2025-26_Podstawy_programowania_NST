#include <iostream>

using namespace std;

int main()
{
    const int ILE = 10;
    int ile;
    int tab[ILE];
    for (int i = 0; i < ILE; i++) // indeksy 0 do n-1
    {
        cout << "x= ";
        cin >> tab[i];
    }
    // for(int i=0; i<ILE; i++)
    //     cout<<tab[i]<<" ";
    for (int i = ILE-1; i >= 0; i--)
        cout << tab[i] << " ";
    return 0;
}