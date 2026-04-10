#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text, pattern;
    int i = 0, j = 0;
    bool found = false;

    cout << "Enter text: ";
    getline(cin,text);

    cout << "Enter pattern: ";
    cin >> pattern;

    int n=0;
    while (text[n]!='\0')
       n++;
    int m = pattern.length();

    while (i < n)
    {
        if (j == m)
        {
            found = true;
            break;
        }

        if (text[i] == pattern[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
            j = 0;
        }
    }
    int loc=i-j;
    if (found)
       cout << "Pattern found at index  "<< loc <<endl;
    else
        cout << "Pattern not found" << endl;

    return 0;
}