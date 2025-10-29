#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "x=";
    cin >> x;
    if (x > 0)  
        cout << "Liczba dodatnia" << endl;
    else if (x < 0) 
        cout << "Liczba ujemna" << endl;
    else             
        cout << "Zero" << endl;
}