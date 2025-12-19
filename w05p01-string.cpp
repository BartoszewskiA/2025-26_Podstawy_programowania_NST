#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "";

    cout << "Podaj tekst: ";
    // cin >> s;
    getline(cin, s);
    cout << "Napisales: " << s << endl;
    cout << "Napis ma " << s.length() << " liter" << endl;
    for (int i = 0; i < s.length(); i++)
        cout << s[i] << ".";
    return 0;
}