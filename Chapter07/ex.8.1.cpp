#include <iostream>

using namespace std;

const int Seasons = 4;

void fil(double * pa, const char Snames [] [10]);
void show(const double * da, const char Snames [] [10]); //wskaznik stalej, czteroelementowej, dwuwymiarowej tablicy znakow

int main()
{
    const char Snames [Seasons][10] = {"Wiosna", "Lato", "Jesien", "Zima"};
    double expenses[Seasons];

    fil(&expenses[0], Snames); // &nazwatablicy[0] == nazwatablicy - oba oznaczaja adres pierwszego elementu tablicy
    show(expenses, &Snames[0]);

    return 0;
}
void fil( double * pa, const char Snames [] [10])
{
    double * pt;
    int i;
    for(pt = pa, i = 0; i < Seasons; ++pt, ++i)
    {
        cout << "Podaj wydatki za okres " << *(Snames + i) << ": ";     //*(Snames + i) == Snames[i] - zawartosc wiersza i tablicy Snames
                                                                        //*Snames[i] wskaznik na pierwszy element kazdej z czterech tablic (tu pierwsza litera)
                                                                        //*Snames + i wyswietli pierwsza tablice 10 elementow, a potem ta sama tablice, ale dopiero od drugiego elementu, potem od trzeciego itd (Wiosna, iosna, osna)
                                                                        //Snames + i pokaze adresy 'i' elementow tablicy
        cin >> (*pt);                         //lub pa[i] bez tworzenia dodatkowej zmiennej na wskaznik pt
    }
}
void show(const double * da, const char Snames [] [10])
{
    double total = 0;
    cout << "\n Wydatki\n";
    for(int i = 0; i < Seasons; ++i)
    {
        cout << Snames[i] << ": " << da[i] << " zl.\n";
        total += da[i];    //da[i] == *da wartosc danej pozycji, pozwala na sieganie do wartosci bez tworzenia dodatkowego wskaznika i korzystania z zakresu tablic
                          //&da[i] - adres danej pozycji
                         //da - wskaznik na pierwszy  element tablicy da == &da[0] == &da
                        //*da - wskaznik wyluskujacy wartosc pierwszego elementu tablicy czyli da[0]
    }
    cout << "Lacznie wydatki roczne: " << total << " zl.\n";
}
