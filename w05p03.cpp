#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nazwiska[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "POdaj nazwisko: ";
        getline(cin, nazwiska[i]);
    }
    // for (int i = 0; i < 5; i++)
    //     cout << i + 1 << ": " << nazwiska[i] << endl;
    for (int i = 0; i < 5; i++)
        cout << i + 1 << ": " << nazwiska[i][0] << endl;

    return 0;
}