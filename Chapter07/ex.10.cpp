#include <iostream>
#include <cstdlib>

using namespace std;

const int para = 2;

void show();
double wczytaj(int);
double add(double, double);
double srednia(double, double);
double calculate(double, double, double (*pa)(double, double), double (*ps)(double, double));

    int main()
    {
        char znak;
        cout << "Podaj dwie liczby, ktore posluza do obliczen:\n";

        do
        {
            double wynik;
            wynik = calculate(wczytaj(1), wczytaj(2), add, srednia); //NAJPIERW WCZYTUJE 2 PARAMETR, A POTEM PIERWSZY... ?
            cout << "Wynik to " << wynik << endl << endl;

            cout << "Jesli chcesz sprobowac jeszcze raz, wybierz 'y',\n"
                 << "Jesli chcesz zakonczyc, wybierz inny znak.\n"
                 << "WYBIERAM: ";
            cin >> znak;

        }while(znak == 'y');

        return 0;
    }
    void show()
    {
        cout << "\nWybrales dwie liczby. Jesli chcesz, mo¿esz:\n"
             << "1. dodac je                     2. wyliczyc ich srednia\n"
             << "3. ponowanie wczytac liczby     4. wyjsc z programu\n"
             << "   WYBIERAM: ";

    }
    double wczytaj(int i)
    {
        double liczba;
        cout << "\nPodaj " << i << " parametr: ";
        while(!(cin >> liczba))
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "\nNiepoprawne dane. Podaj liczbe: ";
        }
        //cin.get();
        return liczba;
    }
    double add(double a, double b)
    {
        return a + b;
    }
    double srednia(double a, double b)
    {
        return (a + b)/para;
    }
    double calculate(double a, double b, double (*pa)(double, double), double (*ps)(double, double))
    {
        show();

        int choice;
        while(choice != 4)
        {
           cin >> choice;
            switch(choice)
            {
                case 1 : return (*pa)(a, b);
                case 2 : return (*ps)(a, b);
                case 3 : cin.clear();
                         while(cin.get() != '\n')
                            continue;
                        main(); //dziala bez przekazywania wskaznika na main jako arg funkcji, czyli funkcja zadziala w funkcji i bez przekazywania wskaznika na nia? to po co te wskazniki na funkcje?
                                //calculate(wczytaj(1), wczytaj(2), add, srednia);      //zwraca wynik dzialania na pierwszych danych, przekazanie wskaznika na calculate jako argumentu funkcji calculate to naprawi?
                         break;
                case 4 : cout << "Koniec programu!";
                         exit(EXIT_FAILURE);
                default : cin.clear();
                          while(cin.get() != '\n')
                            continue;
                          cout << "Niepoprawne dane. Sprobuj jeszcze raz: ";
                          break;

            }
        }
    }
