#include <iostream>

using namespace std;

double srednia(int, int);

int main()
{
    int jeden;
    int dwa;

    cout << " Podaje dwie liczby calkowite, by wyliczyc srednia harmoniczna. \n Zero konczy:\n";

    while(cin >> jeden >> dwa)
    {
        if(jeden == 0 || dwa == 0)
        {
            cout << " Koniec programu!/n";
            break;
        }
        else
        {
            double score = srednia(jeden, dwa);
            cout << " Srednia harmoniczna dla " << jeden << " i " << dwa << " to: " << score << endl
                 << " Podaj dwie kolejne liczby:\n";
        }

    }

    return 0;
}

double srednia(int x, int y)
{
    return 2.0 * x * y / (x+y);
}
