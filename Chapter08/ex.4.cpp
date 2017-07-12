#include <iostream>
#include <cstring>
using namespace std;

struct stringy
{
    char * str;
    int ct;
};

void show(const char *, int = 1);   //wskaznik na lancuch
void show(const stringy &, int = 1); //ref do pola struktury bedacego wskaznikiem na poczatek adresu lancucha
void sett(stringy & bea, const char * tes); //ref do pola struktury które bedzie ustawiane i staly lancuch ktiory bedzie kopiowany, ale nie modyfikowany

int main()
{
    stringy beany;
    char testing[] = "Rzeczywistosc to juz nie to samo, co kiedys";

    sett(beany, testing); //settt??

    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Gotowe!");

    return 0;
}
void show(const char * n, int d)
{
    for(int i = 0; i < d; ++i)
        cout << n << endl;      //*n wskazuje na pierwszy element łańcucha i pokazuje tylko to
}
void show(const stringy & n, int d)
{
    for(int i = 0; i < d; ++i)
        cout << n.str << endl;

}
void sett(stringy & bea, const char * tes)
{
    int lengt = strlen(tes);    //sprawdzanie dlugosi przekazanego lancucha bez znaku null
    char * ps = new char [lengt + 1];   //alokacja pamieci na lancuch tak duzy, jak przekazany + znak null
    bea.str = ps;           //
    strcpy(ps, tes);        //kopiowanie
    bea.ct = lengt;         //pole struktury wskazuje nowy blok pamieci
   // cout << endl << "  bea:  " << bea.str << "   &bea: " << &bea.str << "   ps: " << ps << "    &ps:" << &ps << "    *ps:" << *ps << "    " << endl;
}   //jak zwolnic pamiec po ps, jesli jest void i nie zwraca wskaznika do main, gdzie moznaby zwolnic blok zaraz przed return? delete [] ps;
