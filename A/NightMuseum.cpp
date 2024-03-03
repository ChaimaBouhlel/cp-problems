#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int count = 0;
    string s;
    cin >> s;
    int lp = 97;
    for (char c : s)
    {
        count += min(abs(c - lp), 26-abs(c - lp));
         lp = c;
    }
    cout << count;
    return 0;
}
