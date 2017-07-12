#include <iostream>

using namespace std;

int wczytaj(int*, int);
void wypisz (const int*, int);
double srednia(const int*, int);

int main()
{
    int wyniki [10];

    cout << "Dowolna litera konczy wczytywanie.\nPodaj 10 wynikow golfowych:\n";

    int ile = wczytaj(wyniki, 10);

    wypisz(wyniki, ile);

    double score = srednia(wyniki, ile);

    cout << "\nSrednia " << ile << " wynikow golfowych, to: " << score << endl;

    return 0;
}

int wczytaj(int* pw, int maks)
{
    int wynik;
    int i;
    for(i = 0; i < maks && (cin >> wynik); i++) //najpierw i < maks, bo jeœli nie jest mniejsze, nie wczyta kolejnej liczby
       pw[i] = wynik;                           //w odwrotnej kolejnosci najpierw wczytywaloby liczbe, a potem sprawdzalo, czy tablica sie nie przepe³ni
    return i;
}
void wypisz (const int* arr, int maks)
{
    for(int i = 0; i < maks; i++)
        cout << arr[i] << ", ";
}
double srednia(const int* arr, int maks)
{
    double total = 0;
    for(int i = 0; i < maks; i++)
    {
        total += arr[i];
    }
    return total/maks;
}
