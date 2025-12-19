#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    //cout << time(NULL);
    srand(time(NULL));

    for (int i = 0; i < 20; i++)
        cout << rand()%201 - 100 << " ";
    return 0;
}