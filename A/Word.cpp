#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>

using namespace std;

int main()
{
    int count = 0;
    string s;
    cin >> s;
    int curr;
    int t[26] = {0};
    int nb = 0;
    int NB = 0;
    for (char &c : s)
    {
        if (isupper(c))
        {
            NB++;
        }
        else
        {
            nb++;
        }
    }
    if (nb < NB)
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    else
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s;
    return 0;
}
