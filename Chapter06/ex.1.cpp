#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char ch;
    cout << "Podaj zdanie do wczytania. @ kończy wczytywanie.\n";

    while(cin.get(ch) && ch != '@')
    {
        if(isdigit(ch))                   //jeśli znak jest cyfrą, pomiń go
            continue;
        if(islower(ch))                  //jeśli znak jest małą literą
            cout << (char)toupper(ch);   //bez rzutowania funkcja wyświetla kod ASCII zamiast znaku
        else if(isupper(ch))             //jeśli znak jest dużą literą
            cout << (char)tolower(ch);   //zamień go na małą literę
        else
            cout << ch;
    }
    cout << "\nKoniec podmian!";

    return 0;
}
