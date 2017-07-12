#include <iostream>

using namespace std;

template <typename T>
T max5 (T tab [])
{
    T maks = tab[0];
    for(int i = 1; i < 5; ++i)
    {
        if(maks < tab[i])       //albo tak:  maks = (maks > tab[i])? maks : tab[i];
            maks = tab[i];
    }
    return maks;
}; //czy tu powinien byc srednik?
int main()
{
    int a [] = {4,2,6,0,3};
    double b [] = {1.3, 2.0, 7.1, 11.7, 3.5};

    cout << max5(a) << endl;
    cout << max5(b) << endl;

    return 0;
}
