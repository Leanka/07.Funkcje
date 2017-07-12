#include "g.h"
#include<cstring>
#include<iostream>

extern const int Len;

using namespace std;

void setgolf(golf & g, const char * name, int hc)
{
    strcpy(g.fullname, name);
    handicap(g, hc);
    return;
}
int setgolf(golf & g)
{
    cout << "Podaj handicap: ";
    int inputh;
    cin >> inputh;
    while(!cin)
    {
        cout << "Niepoprawne dane. Sproboj jeszcze raz: ";
        cin.clear();
        cin.sync();
        cin >> inputh;
    }
    cin.get();

    cout << "Podaj nazwisko: ";
    char input[Len];
    char rest;
    cin.get(input, Len);
    while(cin)
    {
        cin.get(rest);
        while(rest != '\n')
            cin.get(rest);
        setgolf(g, input, inputh);
        return 1;
    }
    cout << endl << "Koniec programu!" << endl;
    return 0;
}
void handicap(golf & g, int hc)
{
    g.handicap = hc;
    return;
}
void showgolf(const golf & g)
{
    cout << endl << g.fullname << endl << g.handicap << endl;
}
