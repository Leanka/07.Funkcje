#include <iostream>

using namespace std;
const int arsize = 30;

struct Batonik
{
    char nazwa [arsize];
    double waga;
    int kalorie;
};

Batonik & wypelnij(Batonik &, const char * = "Millennium Munch", double = 2.85 , int = 350); //Batonik & wypelnij
void show(const Batonik &);

int main()
{
    Batonik coco;
    cout << "Struktura z domyœlnymi parametrami: \n";
    show(wypelnij(coco));
    cout << "Struktura z nowymi parametrami: \n";
    show(wypelnij(coco, "Mars", 120.5, 243));
    cout << "Struktura z domyœlnymi parametrami po raz drugi: \n";
    show(wypelnij(coco));
    cout << "Struktura z czesciowo domyœlnymi parametrami: \n";
    show(wypelnij(coco, "Milky Way"));

    return 0;
}
Batonik & wypelnij(Batonik & kokosowy, const char * naz, double wag, int kal)
{
    for(int i = 0; i < arsize; ++i) // przy warunku kokosowy.nazwa[i] obcina kazdy kolejny lancuch do dlugosci poprzedniego (tu do 4 liter, bo "mars"), bo u¿ywa referencji
    {
        kokosowy.nazwa[i] = naz[i];
    }
    kokosowy.waga = wag;
    kokosowy.kalorie = kal;

    return kokosowy; //return & kokosowy??

}
void show(const Batonik & b)
{
    cout << "Nazwa:     " << b.nazwa << endl
         << "Waga:      " << b.waga << endl
         << "Kalorie:   " << b.kalorie << endl << endl;
}
