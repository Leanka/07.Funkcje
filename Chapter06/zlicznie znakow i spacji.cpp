#include <iostream>

int main()
{

using std::cin;
using std::cout;

char ch;
int space = 0;
int total = 0;

cout << "Podaj zdanie: ";

do
{
    cin.get(ch);
    if(ch == ' ')
        ++space;
    ++total;

}while(ch != '.');

cout << "W zdaniu jest " << space << " spacji i " << total << " znakow, oraz " << total-space << " znakow bez spacji.";

return 0;
}
