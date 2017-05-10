#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string slowo;
    cout << "Podawaj slowa(pojedyncze q konczy): ";

    int samogloska = 0;
    int spolgloska = 0;
    int inne = 0;

    while(cin >> slowo && (slowo[0] != 'q' && slowo[1] != ' '))
    {
        if(isalpha(slowo[0]))
        {
           switch(slowo[0])
           {
                case 'A' :
                case 'a' :
                case 'E' :
                case 'e' :
                case 'I' :
                case 'i' :
                case 'O' :
                case 'o' :
                case 'U' :
                case 'u' :
                case 'Y' :
                case 'y' :
                    samogloska++;
                    break;
                default :
                    spolgloska++;
                    break;
           }
        }
        else if(!(isalpha(slowo[0])) && !(isblank(slowo[0])) && !(ispunct(slowo[0])) )
            inne++;

    }
    cout << endl << "\t" << samogloska << " slow zaczyna sie od samoglosek,\n"
                 << "\t" << spolgloska << " slow zaczyna sie od spolglosek,\n"
                 << "\t" << inne << " slow zaczyna sie od innych znakow\n";
    return 0;
}

