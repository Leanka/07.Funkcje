#include <iostream>

using namespace std;

const int strsize = 30;
const int tabsize = 4;

void showmenu();

struct struktura
{
    char imie [strsize];
    char stanowisko [strsize];
    char pseudonim [ strsize];
    int preferencje;
};

int main()
{
     struktura dane [tabsize] =
    {
        {"Marian Kowalski", "Portier", "Kowal", 0},
        {"Dolores Flores", "Recepcjonistka", "Flora", 2},
        {"Konrad Kondrat", "Kucharz", "Kondziu", 1},
        {"Don Estos", "Sprzatacz", "Domestos", 2}
    };

    showmenu();

    char ch;
    while(cin.get(ch))
    {
        int i;
        switch(ch)
        {
            case 'a':
            case 'A':
                for(i = 0; i < tabsize; ++i)
                {
                    cout << dane[i].imie << endl;
                }
                break;
            case 'b':
            case 'B':
                for(i = 0; i < tabsize; ++i)
                {
                    cout << dane[i].stanowisko << endl;
                }
                break;
            case 'c':
            case 'C':
                for(i = 0; i < tabsize; ++i)
                {
                    cout << dane[i].pseudonim << endl;
                }
                break;
            case 'd':
            case 'D':
                for(i = 0; i < tabsize; ++i)
                {
                    switch(dane[i].preferencje)     //pole preferencja jest int, wiec moze posluzyc jako numer etykiety
                    {
                        case 0 : cout << dane[i].imie << endl;
                                break;
                        case 1 : cout << dane[i].stanowisko << endl;
                                break;
                        case 2 : cout << dane[i].pseudonim << endl;
                                break;
                        default : cout << "Nie ma takiej preferencji.\n";
                                break;
                    }
                    //gdyby tu byl break, petla konczylaby sie po wyswietleniu jednego rekordu
                }
                break;
            case 'q':
            case 'Q':
                cout << "Koniec programu!\n";
                return 0;

            default:
                    cin.clear();                //zerownie obiektu wejsciowego
                    while(cin.get() != '\n')       //odczytywanie pozostalych danych wejsciowych az do znaku nowegpo wiersza
                        cin.get();
                cout << "\nProsze podac poprawne dane.\n";
        }
        showmenu();
    }


    return 0;
}

void showmenu()
{
    cout << "\n"
         << "a. lista imion          b. lista stanowisk\n"
         << "c. lista pseudonimow    d. lista wg preferencji\n"
         << "q. koniec\n"
         << " Wybierz akcje: ";
}
