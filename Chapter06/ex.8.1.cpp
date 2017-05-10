#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

const int mysize = 60;

int main()
{
    char nazwa [mysize];
    char znak;

    cout << "Podaj nazwe pliku do odczytu: ";
    cin.getline(nazwa, mysize);

    ifstream fout;
    fout.open(nazwa);
    while(!fout.is_open())
    {
        cout << "Otwarcie pliku nie powiodlo sie!";
        exit(EXIT_FAILURE);
    }

    int i = 0;
    while(fout.get(znak))
    {
        ++i;
        cout << znak;
    }
    if(fout.eof())
        cout << "\tKoniec pliku!\n";
    else if(fout.fail())
        cout << "Podczas odczytu wystapil blad!\n";
    else
        cout << "Wystapil nieznany blad!\n";
    if( i == 0)
        cout << "Brak danych do wczytania.\n";
    else
        cout << "Plik zawiera " << i << " znakow.\n";

    fout.close();

    return 0;
}
