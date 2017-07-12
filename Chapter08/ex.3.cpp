#include <iostream>

using namespace std;

void zamien(string &);

int main()
{
    cout << "Podaj pierwszy lancuch: ";
    string tekst;
    while(getline(cin, tekst) && tekst != "q")
    {
        zamien(tekst);
        cout << "\nNastepny lancuch: ";

    }
    cout << "Do widzenia!";

    return 0;
}
void zamien(string & zdanie)
{
    for(int i = 0; zdanie[i]; ++i)
    cout << (char)toupper(zdanie[i]);
}
