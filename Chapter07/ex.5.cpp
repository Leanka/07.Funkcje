#include <iostream>

using namespace std;
int silnia(int);

int main()
{
    int s;
    cout << "Podaj parametr: ";
    while(cin >> s)
        cout << silnia(s);
    cout << "\nKoniec!\n";
    return 0;
}

int silnia(int n)
{
    if(n < 2)
        return 1;
   return n * silnia(n-1);
}
