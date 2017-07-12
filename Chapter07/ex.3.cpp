#include <iostream>

using namespace std;

struct pudlo
{
    char producent[40];
    float wysokosc;
    float szerokosc;
    float dlugosc;
    float objetosc;
};

void wyswietl(pudlo);
void val (pudlo *);
void wypelnij(pudlo *);

int main()
{
    pudlo jeden = {"IKEA", 2, 4, 6, }; //ustawia pola struktury poza ostatnim
    wyswietl(jeden); //przekazanie struktury przez wartosc
    val(&jeden);     //przekazanie struktury przez adres
    wypelnij(&jeden);

    return 0;
}

void wyswietl(const pudlo pud) //stala, bo nie modyfikujemy
{
    cout << "\nProducent: " << pud.producent
         << "\nWysokosc: " << pud.wysokosc
         << "\nSzerokosc: " <<pud.szerokosc
         << "\nDlugosc: " << pud.dlugosc
         << "\nObjetosc: " <<pud.objetosc
         << endl;
}
void val(pudlo * pud) //wskaznik na strukture "jeden"
{
    pud->objetosc = pud->wysokosc * pud->szerokosc * pud->dlugosc; //ustawia wartosc pola struktury "objetosc", uzycie operatora poúredniego dostepu "->", bo parametr formalny jest wskaznikiem, a nie strukturπ (wtedy uøywa sie operatora dostepu bezposredniego, czyli kropki)
    wyswietl(*pud); //wywolanie funkcji w funkcji. Parametrem jest wskaünik *pp a nie adres pp, bo funkcja wyswietl przyjmuje jako argument strukture, a nie jej adres
}
void wypelnij(pudlo * pp)
{
    cout << "\nPodaj nazwe producenta, wysokosc, szerokosc i dlugosc pudelka:\n";
    while(cin >> pp->producent >> pp->wysokosc >> pp->szerokosc >> pp->dlugosc) //w razie bledu przerywa petle i konczy
    {
        val(pp);    //parametrem jest adres pp, a nie wartosc pod tym adresem (czyli *pp), bo funkcja val wymaga takiego parametru
        cout << "\nPodaj nazwe producenta, wysokosc, szerokosc i dlugosc pudelka:\n";
    }

}
