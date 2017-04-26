#include <iostream>

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

            cout << "Jesli chcesz sprobowac jeszcze raz, wybierz 'q',\n"
                 << "Jesli chcesz zakonczyc, wybierz inny znak.\n"
                 << "WYBIERAM: ";
            cin >> znak;

        }while(znak == 'q');

        return 0;
    }
    void show()
    {
        cout << "\nWybrales dwie liczby. Jesli chcesz, mo¿esz:\n"
             << "1. dodac je        2. wyliczyc ich srednia\n"
             << "3. wyjsc\n"
             << "WYBIERAM: ";

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
        while(choice != 3)
        {
            cin >> choice;
            switch(choice)
            {
                case 1 : return (*pa)(a, b);
                case 2 : return (*ps)(a, b);
                case 3 : cout << "Koniec!"; //zwrocic do maina cos, co zakonczy zamiast wyswietlac wynik
                         break;
                default : cin.clear();
                          while(cin.get() != '\n')
                            continue;
                          cout << "Niepoprawne dane. Sprobuj jeszcze raz: ";
                          break;

            }
        }
    }
