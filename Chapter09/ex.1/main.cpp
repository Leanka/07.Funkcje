#include<iostream>
#include "g.h"
#include "golf.cpp"

int main()
{
    golf jeden;
    golf dwa;   //golf dwa [4]

    setgolf(jeden, "Amanda Palmer", 5);
    showgolf(jeden);

    std::cout << "\nPodaj handicap,a potem nazwisko. Puste pole nazwiska koñczy wvzytywanie.\n";
    while(setgolf(dwa))     //for(int i = 0; i < 4 && setgolf(dwa[i]); ++i)
    {
        showgolf(dwa);  //showgolf(dwa[i]);
    };

    //tu lub w dodatkowej funkcji display zawartosci tablicy

    return 0;
}
