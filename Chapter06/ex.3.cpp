#include <iostream>

using namespace std;

void showmenu();
void menua();
void menub();
void menuc();

int main()
{
    char ch;
    showmenu();

    while(cin.get(ch))
    {
        cin.get();
        switch(ch)
        {
            case 'a' :
            case 'A' : menua();
                        break;
            case 'b' :
            case 'B' : menub();
                        break;
            case 'c' :
            case 'C' : menuc();
                        break;
            case 'k' :
            case 'K' : cout << "\nKoniec tego dobrego!\n";
                                return 0;
            default : cout << "\nPodaj poprawne dane.\n";
        }
        showmenu();
    }

    return 0;
}
void showmenu()
{
    cout << "\nMasz do wyboru: \n"
         << "A. Sluchaj     B.Placz\n"
         << "C. Chrumkaj    K.Koncz\n"
         << "Wybierz dzialanie: ";
}
void menua()
{
    cout << "\a\n";
}
void menub()
{
    cout << "\n;(\n";
}
void menuc()
{
    cout << "\nChrum chrum, ty mala swinko.\n";
}
