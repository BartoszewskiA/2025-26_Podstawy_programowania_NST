#include <iostream>

using namespace std;
void licznik();

int main()
{
    for(int i=0; i<10; i++)
    {
        licznik();
    }
    return 0;
}

void licznik()
{
    static int ile = 0;
    ile++;
    cout << "funkcje uruchomiono " << ile << " razy" << endl;
}