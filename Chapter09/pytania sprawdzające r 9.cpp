1.
a, automatyczna, bo jest widoczna tylko miêdzy nawiasami funkcji
b, statyczna, ³¹czna zewnêtrznie (globalna) //(w drugim pliku ze slowem extern)
c, statyczna, ³¹czna wewnêtrznie (dekl ze s³owem static poza cia³em funkcji, a przed ich dekl i def)
d, statyczna, bez ³¹czenia, deklarowana w ciele funkcji

2.
deklaracja udostêpnia pojedynczy element przestrzeni nazw w danej funkcji
dyrektywa udostêpnia wszystkie elementy danej przestrzeni nazw
UZUP! // o ró¿nice w obszarze deklaratywnym
3.
#include <iostream>

int main()
{
    double x;
    std::cout << "Podaj warotœæ: ";
    while( !(std::cin >> x))
    {
        std::cout << "Nale¿y wprowadziæ liczbê ";
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
    cout << "Podaj warotœæ: ";
    while( !(cin >> x))
    {
        cout << "Nale¿y wprowadziæ liczbê ";
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
ka¿dy w osobnym pliku //albo jedna f w anonimowej przestrzeeni nazw?????????????????
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
