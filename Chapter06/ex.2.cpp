#include <iostream>

using namespace std;
const int maxsize = 10;

int main()
{
    double tab [maxsize];

    cout << "\nDowolna litera/znak kończy wczytywanie."
         << "\nMaksymalnie możesz podać " << maxsize << " pozycji."
         << "\nPodaj wysokość pierwszego datku:"
         << "\n\n Datek 1: ";

    double total = 0;
    int i = 0;

    while((i < maxsize) && (cin >> tab[i]))
    {
        if(i+1 < maxsize)   //jeœli kolejna pozycja nie jest ostatni¹ w tablicy, a wczytanie danych sie udalo, popros o kolejne dane
            cout << " Datek " << i+2 << ": ";

        total += tab[i];
        ++i;
    }

    if(i == 0)
        cout << "\nBrak danych do wyświetlenia.";
    else
    {
        double srednia = total/i;

        cout << "\nŚrednia to " << srednia
             << ".\nOto datki powyżej średniej: ";

        int ile;
        int brak = 0;
        for(ile = 0; ile < i; ++ile)      //'i' to rzeczywisty rozmiar tablicy
        {
            if(tab[ile] > srednia)
            {
                cout << tab[ile] << ", ";
                ++brak;
            }
        }
        if(brak == 0)
            cout << "\n\nBrak wyników powyżej średniej.\n";

    }
    return 0;
}
