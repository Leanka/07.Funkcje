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

    while(cin >> ch)
    {

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
                        break;


        }
        cin.clear();    //"restets any error flags on the stream"
        cin.sync();     //"ignores anything that could be left in the stream"
        showmenu();
    }

    return 0;
}
void showmenu()
{
    cout << "\nMasz do wyboru: \n"
         << "A. S³uchaj     B.P³acz\n"
         << "C. Chrumkaj    K.Koñcz\n"
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
    cout << "\nChrum chrum, ty mala œwinko.\n";
}
