1.
a, automatyczna, bo jest widoczna tylko mi�dzy nawiasami funkcji
b, statyczna, ��czna zewn�trznie (globalna) //(w drugim pliku ze slowem extern)
c, statyczna, ��czna wewn�trznie (dekl ze s�owem static poza cia�em funkcji, a przed ich dekl i def)
d, statyczna, bez ��czenia, deklarowana w ciele funkcji

2.
deklaracja udost�pnia pojedynczy element przestrzeni nazw w danej funkcji
dyrektywa udost�pnia wszystkie elementy danej przestrzeni nazw
UZUP! // o r�nice w obszarze deklaratywnym
3.
#include <iostream>

int main()
{
    double x;
    std::cout << "Podaj warot��: ";
    while( !(std::cin >> x))
    {
        std::cout << "Nale�y wprowadzi� liczb� ";
        std::cin.clear();
        while (std::cin.get() != '\n')
            continue;
    }
    std::cout << "Podano " << x << std::endl;
    return 0;
}
4.
#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    double x;
    cout << "Podaj warot��: ";
    while( !(cin >> x))
    {
        cout << "Nale�y wprowadzi� liczb� ";
        cin.clear();
        while (cin.get() != '\n')
            continue;
    }
    cout << "Podano " << x << endl;
    return 0;
}
5.
static int average(int, int);
static double average(int, int);
ka�dy w osobnym pliku //albo jedna f w anonimowej przestrzeeni nazw?????????????????
6.
10
4
0 (bo statyczne sa inicjalizowane zerem)
fox - 10
foy - 1
fax - 10
fay - 4
7.
1,
4, 1, 2,
2,
2,
4, 1, 2,
2
