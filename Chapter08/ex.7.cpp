#include <iostream>

template <typename T>            // szablon A
double SumArray(T arr[], int n);
template <typename T>            // szablon B
double SumArray(T * arr[], int n);

struct debts
{
    char name[50];
    double amount;
};

int main()
{
    using namespace std;
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] =
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };
    double * pd[3];     // ustawienie wska ników na pola amount struktur z tablicy Mr_E
    for (int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount;
    cout << endl << "Wyliczanie sumy rzeczy pana E.:"     // things to tablica int
         << SumArray(things, 6);       // u ywamy szablonu A
    cout << endl << "Wyliczanie sumy dlugow pana E.:"     // pd to tablica wska ników na double
         << SumArray(pd, 3);      // uzywa szablonu B (bardziej wyspecjalizowanego)
    cout << endl;
    return 0;
}
template <typename T>
double SumArray(T arr[], int n)
{
    using namespace std;

    double suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma += arr[i];
    }
    return suma;
}
template <typename T>
double SumArray(T * arr[], int n)
{
    using namespace std;

    double suma = 0;
    for (int i = 0; i < n; i++)
    {
         suma += *arr[i];
    }
    return suma;
}
