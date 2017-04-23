#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

const int SLEN = 30;
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n);
void display1 (student st);
void display2 (const student * ps);
void display3 (const student pa[], int n);

int main()
{
    cout << "Podaj wielkosc grupy: ";
    int class_size;
    cin >> class_size;

    while(cin.get() != '\n')
       continue;

    student * ptr_stu = new student [class_size];
    int entered = getinfo(ptr_stu, class_size);

    for(int i = 0; i < entered; ++i)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);

    delete [] ptr_stu;

    cout << "\nGotowe!" << endl;

    return 0;
}
int getinfo(student pa[], int n)
{
    cout << "\nLista " << n << " studentow.\n\n";
    int i;
    for(i = 0; (i < n); ++i)
    {
        cout << "Podaj dane studenta numer " << i+1 << ":\n";

        cout << "   Imie:   ";
        cin.get(pa[i].fullname, SLEN);
        if(isspace(*(pa[i]).fullname)) //jesli podano znak bialy zakoncz wczytywanie // if(0 == strlen(pa[i].fullname))
            return i;
        while(cin.get() != '\n') //czyszczenie bufora
            continue;

        cout << "   Hobby:  ";
        cin.get(pa[i].hobby, SLEN);
        while(cin.get() != '\n')
            continue;

        cout << "   Level:  ";
        cin >> pa[i].ooplevel;
        cin.get();
    }
    return i;
}
void display1 (student st)
{
    cout << "d1.fullname: " << st.fullname
         << ", hobby: " << st.hobby
         << ", ooplevel: " << st.ooplevel << endl;
}
void display2 (const student * ps)
{
    cout << "fullname: " << ps->fullname
         << ", hobby: " << ps->hobby
         << ", ooplevel: " << ps->ooplevel << endl;
}
void display3 (const student pa[], int n)
{
    for(int i = 0; i < n; ++i)
    {
        cout << "\nStudent #" << i+1 << " : ";
        display2(pa+i);
          // cout << " fullname: " << pa[i].fullname
         //    << ", hobby: " << pa[i].hobby
        //    << ", ooplevel: " << pa[i].ooplevel << endl;
    }
}
