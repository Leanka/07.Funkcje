#include <iostream>

using namespace std;

void show(const char * str, int i, int & ile);
void show(const char * str);

int main()
{
    int ile = 0;
    char * zdanie = "To jest test.";
    show(zdanie);           //pokaze raz
    show(zdanie, 1, ile);   //pokaze raz
    show(zdanie, 0, ile);   //nie pokaze w ogole
    show(zdanie, 5, ile);   //pokaze 3 razy, bo to trzecie wywolasnie show z wiecej niz 1 argumentem


    return 0;
}
void show(const char * str, int i, int & ile)
{

    if(i <= 0)
    {
        cout << "Niepoprawne dane.\n";
        ++ile;
    }
    else
    {
        ++ile;
        for(int licz = 0; licz < ile; ++licz)
        {
            cout << licz+1 << ". " << str << endl;
        }
    }
    cout << endl;

}
void show(const char * str)
{
        cout << str << " Tylko pokazuje." << endl << endl;
}
