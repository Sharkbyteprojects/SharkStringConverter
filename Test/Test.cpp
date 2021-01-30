#include <iostream>
#include "SharkStringConvert.h"
#include <string>
using namespace std;
int main()
{
    string td{ "" };
    cout << "Enter some Text: " << endl;
    getline(cin, td);
    char* mycharset{ stringtochar(td) };
    cout << "The Chars: " << mycharset << endl;
    string item = chartostring(mycharset);
    free(mycharset);
    cout << "Back to String: " << item << endl;
}