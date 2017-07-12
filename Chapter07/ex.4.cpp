#include <iostream>

using namespace std;

long double wylicz(int, int, int);


int main()
{
    int pula;
    int picks;
    int puladwa;

    cout << "Dowolna litera konczy program.\n Podaj najwyzsza mozliwa liczbe i ilosc wybieranych liczb oraz wielkosc puli power-bowl:\n";
    while(cin >> pula >> picks >> puladwa)
    {
        long double wynik = wylicz(pula, picks, puladwa);

        cout << "\nPrawdopodobienstwo wylosowania wszystkich " << picks << " liczby sposrod " << pula << " mozliwych"
             << " oraz trafienia power-ball ze zbuioru " << puladwa << " wynosi: " << wynik << endl;
        cout << "Podaj nowe dane:\n";
    }
    return 0;
}
long double wylicz(int p, int ile, int p2)
{
    long double total;
    for(total = 1; ile > 0; p--, ile--)
    {
        total *= p/ile;
    }
    return total; //* (1 / p2);
}
