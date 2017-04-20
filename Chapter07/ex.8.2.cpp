#include <iostream>
#include <array>
#include <string>

using namespace std;

const int Seasons = 4;

struct struktura
{
    double expenses [Seasons];
};

void fil(struktura * exp, const char Snames [][10]);
void show(struktura exp, const char Snames [][10]);

int main()
{
    const char Snames [Seasons][10] = {"Wiosna", "Lato", "Jesien", "Zima"};
    struktura exp;

    fil(&exp, Snames);  //dostep przez adres
    show(exp, Snames);   //przez wartosc

    return 0;
}
void fil(struktura * exp, const char Snames [][10])
{
    int i;
    for(i = 0; i < Seasons; ++i)
    {
        cout << "Podaj wydatki za okres " << Snames[i] << ": ";
        cin >> exp->expenses[i]; //przez adres dodac tylko indeks z i; operator dostepu posredniego ze wzgledu na dostep przez adres
    }
}
void show(struktura exp, const char Snames [][10])
{
    double total = 0;
    cout << "\n Wydatki\n";
    for(int i = 0; i < Seasons; ++i)
    {
        cout << Snames[i] << ": " << exp.expenses[i] << " zl.\n";
        total +=  exp.expenses[i]; //operator dostepu posredniego ze wzgledu na dostep przez wartosc
    }
    cout << "Lacznie wydatki roczne: " << total << " zl.\n";
}
