1. krótkie //i nierekurencyjne
2.a  void piosenka (const char * tytul, int razy = 1);
2.b  nie trzeba modyfikowac definicji, info tylko w prototypie
2.c tak, bo to sta³a ³añcuchowa //jesli razy dalej bezdzie parametrem domyslnym
3.  void iquote(int);
    void iquote(double);
    void iquote(&string); //obiekt klasy, potrzebna referencja? &string

    void iquote(int i)
    {
        cout << "\"" << i << " \" ";
    }
        void iquote(double i)
    {
        cout << "\"" << i " \" "; //lub '"' dziala tak samo
    }
        void iquote(string & i) //const char * str CZEMU?
    {
        cout << "\"" << i " \" ";
    }
4.  struct pudelko
{
    char producent [40];
    float wysokosc;
    float szerokosc;
    float dlugosc;
    float pojemnosc;
}
4.a void ishow (const pudelko & i)    //ref jest w prototypie, wiec nie jest potrzebna w def, const bo niemodyf
    {
        cout << i.producent
             << i.wysokosc
             << i.szerokosc
             << i.dlugosc
             << i.pojemnosc;
    }
 4.b void ishow (pudelko & i)
 {
     i.pojemnosc = i.wysokosc * i.szerokosc * i.dlugosc;
 }
 5 zamiast * pa - & pa w prototypie,
    void fill (array<double, Seasons> & pa);
    void show (const arrar<double, Seasons> & da) //const bo nie modyfikuje
6.a p.domyslne
    double masa(double gestosc, double objetosc = 1); //lub przeciazenie funkcji
6.b nie da sie, liczba nie jest po prawej stronie, wiec nie mozna uzyc domyslnych, // mozna przeciazyc
                                                                                    //void repeat (int times, const char * str);
                                                                                    //void repeat (const char * str);
6.c int srednia(int, int);
    double srednia(double, double);
6.d wcale, trzeba uzyc szablonu bo funkcje zwracaja rozne wartosc
7. template <typename t>
   t bigger( t a, t b)
   { return a > b ? a : b; };
8. inline pudelko <> bigger <pudelko> (const pudelko & a, const pudelko & b) {return a > b ? a : b; }
9. v1 - float
    v2 -  nie mozna przypisac rwartosci do zmiennej referencyjnej
    v3 - ?
    v4 - int
    v5 double
