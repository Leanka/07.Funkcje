#include <iostream>

using namespace std;

int fill_array(double*, int);
void show_array(const double*, const int);
void reverse_array(double*, const int);
void show_menu();

int main()
{
    const int mc = 12;
    int stan = mc;
    double wydatki[mc];
    cout << " Witaj! Podaj wysokosc miesiecznych rachunkow za telefon od stycznia, do grudnia:\n Dowolna litera konczy program.\n";

    show_menu();
    int wybor;
    while((cin >> wybor) && wybor != 4)
    {
        switch(wybor)
        {
            case 1 : stan = fill_array(wydatki, mc);
                     break;

            case 2 : show_array(wydatki, stan);
                     break;

            case 3 : reverse_array(wydatki, stan);
                     break;

            default : cout << "\nNie ma takiej opcji. Sproboj jeszcze raz.\n";
                     break;

        }
        show_menu();
    }
    cout << endl << "Czesc!" << endl;


    return 0;
}

void show_menu()
{
    cout << "\n\n 1.Podaj kwoty          2.wypisz "
         << "\n 3.odwroc kolejnosc     4. WYJSCIE\n";
}

void reverse_array(double * arr, const int maks)
{
    double temp;
    int xedni;
    int index;
    for(index = 0, xedni = maks; index < xedni; index++, xedni--)
    {
        temp = arr[index];
        arr[index] = arr[xedni-1]; //bo arr[xendi] jest juz poza tablica
        arr[xedni-1] = temp;        //-||-
    }
    show_array(arr, maks);
}

void show_array(const double * arr, const int maks)
{
    int index;;
    for(index = 0; index < maks; index++)
    {
        cout << "\n Pozycja " << index+1 << ": " << arr[index];
    }
}

int fill_array(double * arr, int maks)
{
    cout << "\n Dowolna litera konczy wczytywanie.\n\n";

    int index = -1;
    do
    {
        index++;
        if(index >= maks)
            break;

       cout << "   Podaj " << index + 1 << " wartosc: ";

    }while(cin >> arr[index]);
    cin.clear();
    while(cin.get() != '\n')
        continue;

    return index;
}
