#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char ch;
    cout << "Podaj dane do wczytania. @ konczy wczytywanie.\n";

    while(cin.get(ch) && ch != '@')
    {
        if(isdigit(ch))
            continue;
        if(islower(ch))
            cout << (char)toupper(ch); //bez rzutowania funkcja zamienia ma³¹ litere na duz¹, ale wyswietla ASCII zamiast znaku
        else if(isupper(ch))
            cout << (char)tolower(ch);
        else
            cout << ch;
    }
    cout << "\nKoniec podmian!";

    return 0;
}
