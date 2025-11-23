#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << i << " ";
    }
    cout << "\n----------------------------\n";
    int i = 0;
    while (i < 10)
    {
        cout << i << " ";
        i++;
    }
    cout << "\n----------------------------\n";
    int j = 0;
    do
    {
        cout << j << " ";
        j++;
    } while (j < 10);

    return 0;
}