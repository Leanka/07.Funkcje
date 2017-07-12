#include <iostream>
#include <cstring>

using namespace std;

template <typename T>
T max5 (T tab [], int indeks);


const char* max5 (const char *[], int); //

int main()
{
    int a [5] = {4,2,6,0,3};
    double b [4] = {2.0, 7.1, 11.7, 3.5};
    const char * napisy [3] = {"Ania", "Ala", "Kasia"};     //const char napisy [3][]??

    cout << max5(a, 5) << endl;
    cout << max5(b, 4) << endl;
    cout << max5(napisy, 3) << endl;

    return 0;
}
template <typename T>
T max5 (T tab [], int indeks)
{
    T maks = tab[0];
    for(int i = 1; i < indeks; ++i)
    {
        if(maks < tab[i])       //albo tak:  maks = (maks > tab[i])? maks : tab[i];
            maks = tab[i];
    }
    return maks;
}

const char* max5 (const char * tab [], int indeks)
{
    int maks = strlen(tab[0]);
    int id = 0;

    for(int i = 1; i < indeks; ++i)
    {
        if(maks < strlen(tab[i]))
        {
            id = i;
        }
    }

    return tab[id];
}
