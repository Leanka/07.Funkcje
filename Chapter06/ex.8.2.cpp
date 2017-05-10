#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

const int mysize = 20;

int main()
{
    char nazwa [mysize];
    ifstream fcin;

    cout << "Podaj nazwe pliku do odczytu: ";
    cin.getline(nazwa, mysize);

    fcin.open(nazwa);
    if(!fcin.is_open())
    {
        cout << "Otwarcie pliku nie powiodlo sie. \nProgram zostanie zamkniety.";
        exit(EXIT_FAILURE);
    }

    int i = 0;
    char ch;
    while(fcin.get(ch))
    {
        cout << ch;
        ++i;
    }
    if(fcin.eof())
        cout << "\n\tKoniec pliku!";
    else if(fcin.fail())
        cout << "\n\tWystapil blad przy wczytywaniu danych z pliku.";
    else
        cout << "\n\tWystapil nieznany blad";
    if(i == 0)
        cout << "\n\tBrak danych do wyswietlenia.";
    else
        cout << "\n\tPlik zawiera " << i << " znakow.";

    return 0;
}
