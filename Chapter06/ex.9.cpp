#include <iostream>                      // dla pliku abc.txt
#include <fstream>
#include <cstdlib>                      //zawiera definicje funkcji exit()

using namespace std;

const int mysize = 20;

struct struktura
{
    string nazwisko;
    double kwota;
};

int main()
{
    ifstream fw;

    cout << "Podaj nazwe pliku do odczytu: ";
    char nazwa [mysize];
    cin.get(nazwa, mysize);

    fw.open(nazwa);
    if(!fw.is_open())
    {
        cout << "Nie udalo sie odczytac pliku.\n Program zostanie zamkniety.\n";
        exit(EXIT_FAILURE);
    }

    int i;
    int wielkosc;
    struktura * dane;           //deklaracja wskaznika na strukture 'dane'

    while(fw >> wielkosc)       //wielkosc tablicy poprawnie pobrana z pliku jako warunek wykonania sie petli
    {
        fw.get();
        dane = new struktura [wielkosc];            //alokacja pamieci na strukture dane
        for(i = 0; i < wielkosc; ++i)
        {
            getline(fw, dane[i].nazwisko);          //wczytanie wiersza z pliku
            cout << dane[i].nazwisko << endl;
            fw >> dane[i].kwota;                    //wczytanie liczby z pliku
            fw.get();                               //zlapanie znaku nowego wiersza
            cout << dane[i].kwota << endl;
        }
    }

    cout << endl;
    if(fw.eof())
        cout << "Koniec pliku!\n";
    else if(fw.fail())
        cout << "Blad przy wczytywaniu danych z pliku.\n";
    else
        cout << "Nieznany blad.\n";

    cout << "\nNasi wspaniali sponsorzy: \n";

    int ile = 0;
    for(i = 0; i < wielkosc; ++i)
    {
        if(dane[i].kwota >= 10000)            //wyswietlanie zawartosci zawartosci tablicy powyzej danej kwoty
        {
            cout << "\t" << dane[i].nazwisko << endl;
            ++ile;           //jesli choc jeden rekord z tablcy spelnia warunek, zwieksz p jeden
        }
    }
    if(ile == 0)            //jesli zaden rekord z tablicy nie spelnil warunku ile pozostalo = 0
            cout << "\t" << "brak";

    ile = 0;
    cout << "\nNasi sponsorzy:\n";
    for(i = 0; i < wielkosc; ++i)           //wyswietlanie zawartosci zawartosci tablicy ponizej danej kwoty
    {
        if(dane[i].kwota < 10000)
        {
            cout << "\t" << dane[i].nazwisko << endl;
            ++ile;
        }
    }
    if(ile == 0)
            cout << "\t" << "brak";


    fw.close();
    delete [] dane; //kasowanie po new, potrzebne skasowanie kazdego elementu tablicy z osobna?
    return 0;
}
