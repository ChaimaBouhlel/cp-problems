#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int n, p;
    cin >> n;
    cin >> p;
    int t[n];
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }
    int s = 0;
    int l = p - 2;
    int r = p;
    if (t[p - 1])
        s++;
    while (l >= 0 && r < n)
    {
        if (t[l] + t[r] == 2)
            s+=2;
        l--;
        r++;
    }
    if (l >= 0)
    {
        for (int i = 0; i <= l; i++)
        {
            if (t[i])
            {
                s++;
            }
        }
    }
    else if (r < n)
    {
        for (int i = r; i < n; i++)
        {
            if (t[i])
            {
                s++;
            }
        }
    }
    cout << s;
    return 0;
}
