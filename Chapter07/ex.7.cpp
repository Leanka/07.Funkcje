#include <iostream>
//#include <cstdlib>

using namespace std;
const int Max = 5;

double * fill_array( double * begining, double * ending);            //zwraca wskaznik typu double (pt), argumenty to zakres tablicy - od pierwszego elementu do tego za ostatnim elementem (ostatni + 1)
void show_array( const double * begining, const double * ending);   //niczego nie zmienia, st¹d const
void revalue_array(double r, double * begining, double * ending);

int main()
{
    double properties[Max];
    double * sizee;            //wskaznik na zmienna typu identycznego ze zwracanym przez funkcje fill_array

    sizee = fill_array(properties, properties+Max); //zwraca wskaznik na ostatni el zakresu
    show_array(properties, sizee);                  //wykorzystuje wskaznik zwracany przez fill_array jako argument

    if(sizee > 0)
    {
        cout << "Podaj czynnik zmiany wartosci: ";
        double factor;
        while(!(cin >> factor))  //w razie wczytania blednych danych czyœci iostream i wczytuje nowe dane
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "Niepoprawna wartosc. Podaj liczbe: ";
        }
        revalue_array(factor, properties, sizee);
        show_array(properties, sizee);
    }
    cout << "Gotowe!\n";
    cin.get();

    return 0;
}

double * fill_array( double * begining, double * ending)
{
    double temp;     //do przechowania podanej wartosci przed jej sprawdzeniem i wczytaniem do tablicy
    int i;          //do odliczania elementow
    double * pt;    //do stworzenia kopii wsaznika na poczatek tablicy

    for(i = 1, pt = begining; pt != ending; ++i, ++pt)
    {
        cout << "Podaj wartosc " << i << ": ";
        cin >> temp;
        if(!cin)
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "Bledne dane. Wprowadzanie danych przerwane.\n";
            break;
        }
        else if(temp < 0)
            break;
        *pt = temp; //zapisuje dane w tablicy przez wskaznik na nia
    }
    return pt; // zwraca wskaznik na miejsce za ostatnim zapisanym elementem tablicy
    }

void show_array( const double * begining, const double * ending)
{
    const double * pt; //const dla zgodnosci przypisywanych typow
    int i;

    for(i = 1, pt = begining; pt != ending; ++i, ++pt) // *pt nie mo¿naby modyfukowaæ ze wzgledu na const, ale pt nie jest stala
        cout << "Nieruchomosc nr " << i << ": " << *pt << endl;
}

void revalue_array( double r, double * begining, double * ending)
{
    double * pt;
    int i;

    for(i = 1, pt = begining; pt != ending; ++i, ++pt)
         *pt *= r; //modyfikacja wartosci tablicy
}
