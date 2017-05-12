#include <iostream>
#include <string>

using namespace std;

struct struktura
{
    string nazwa;
    double kwota;
};

int main()
{
    cout << "Podaj liczbe wplacajacych: ";
    int liczba;
        while (!(cin >> liczba)) //w przypadku b³êdu czysci strumien wejsciowy
        {
            cout << "\nPodaj poprawne dane: ";
            cin.clear();
            while(cin.get() != '\n') //tak d³ugo, az dojdzie do znaku nowego wiersza.
                continue;
        }
        cin.get();              // ³apie znak nowego wiersza po poprawnym wprowadzeniu danych
    struktura * dane = new struktura [liczba];      //tablica dynamiczna, jednowymiarowa    CZEMU LICZBA, A NIE LICZBA -1?

    int i;
    for(i = 0; cin.good() && i < liczba; i++)
    {
        cout << "\nPodaj nazwisko " << i+1 << " donatora: ";
        getline(cin, dane[i].nazwa);        //zapisanie danych w polu tablicy struktur
        cout << "\nPodaj wysokosc darowizny: ";
        while (!(cin >> dane[i].kwota))
        {
            cout << "\nPodaj poprawne dane. Wysokosc darowizny: ";
            cin.clear();
            while(cin.get() != '\n')
                continue;
        }
        cin.get();
    }
    cout << "\nNasi wspaniali sponsorzy: \n";

    int ile = 0;
    for(i = 0; i < liczba; ++i)
    {
        if(dane[i].kwota >= 10000)
        {
            cout << "\t" << dane[i].nazwa << endl;
            ++ile;           //jesli choc jeden rekord z tablcy spelnia warunek, zwieksz o jeden
        }
    }
    if(ile == 0)            //jesli zaden rekord z tablicy nie spelnil warunku ile pozostalo = 0
            cout << "\t" << "brak";

    ile = 0;
    cout << "\nNasi sponsorzy:\n";
    for(i = 0; i < liczba; ++i)
    {
        if(dane[i].kwota < 10000)
        {
            cout << "\t" << dane[i].nazwa << endl;
            ++ile;
        }
    }
    if(ile == 0)
            cout << "\t" << "brak";

    delete [] dane; //kasowanie po new
    return 0;
}
