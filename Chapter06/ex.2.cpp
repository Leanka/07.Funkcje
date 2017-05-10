#include <iostream>

using namespace std;
const int maxsize = 10;

int main()
{
    double tab [maxsize];

    cout << "Dowolna litera/znak konczy wczytywanie. \nPodaj wysokosc pierwszego datku:\n Datek 1: ";

    double total = 0;
    int i = 0;

    while((i < maxsize) && (cin >> tab[i]))
    {
        if(i+1 < maxsize)
            cout << " Datek " << i+2 << ": ";

        total += tab[i];
        ++i;
    }

    double srednia = total/i;

    cout << " Srednia to " << srednia << ". Oto datki powyzej sredniej: ";

    int ile;
    for(ile = 0; ile < maxsize; ++ile)
    {
        if(tab[ile] > srednia)
            cout << tab[ile] << ", ";
    }

    return 0;
}
