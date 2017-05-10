#include <iostream>

using namespace std;
const int p1 = 35000;
const int p2 = 15000;
const int p3 = 10000;
const int p4 = 5000;
int main()
{

    signed int datek;
    double tax = 0;

    cout << "Podaj wysokosc dochodu w twerpach: ";
    while(cin >> datek)
    {
        if(datek > p1)                         //powyzej 35
            tax = (datek - p1)* 0.20 + 20000 * 0.15 + p3 * 0.10;

        else if( datek <= p1 && datek > p2) // nastepne 20 tys czyli od 15 do 35
            tax = (datek - p2) * 0.15 + p3 * 0.10;

        else if( datek <= p2 && datek > p4) // nastepne 10 tys, czyli od 5 do 15
            tax = (datek - p4) * 0.10;

        else if( datek <= p4 && datek >= 0)               //pierwsze 5 tys = 0
            tax = 0;

        else
            break;

        cout << "\nPodatek od " << datek << " twerpow wynosi " << tax << " twerpow.\n";

    }


    return 0;
}
