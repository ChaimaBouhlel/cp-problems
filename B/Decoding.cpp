#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string rs = "";

    for (int i = 0; i < n; i++)
    {
        rs += "0";
    }

    int l = n / 2 + n % 2 - 2;
    int r = n / 2 + n % 2;
    rs[n / 2 + n % 2 - 1] = s[0];
    if (n % 2)
        for (int i = 1; i < n; i++)
        {
            if (i % 2)
            {
                rs[l] = s[i];
                l--;
            }
            else
            {
                rs[r] = s[i];
                r++;
            }
        }
    else
        for (int i = 1; i < n; i++)
        {
            if (!(i % 2))
            {
                rs[l] = s[i];
                l--;
            }
            else
            {
                rs[r] = s[i];
                r++;
            }
        }
    cout << rs;
}
