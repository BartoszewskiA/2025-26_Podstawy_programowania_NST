#include <iostream>
using namespace std;
void zwieksz_o_10(int &x);

int main()
{
    int x = 10;
    zwieksz_o_10(x);
    cout << "Po zwiekszeniu x= " << x;
    return 0;
}

void zwieksz_o_10(int &x)
{
    x += 10;
    cout << "wewnatrz funkcji x=" << x << endl;
}