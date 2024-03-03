#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int s = 0, d = 0;
    int t[n];
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }
    int r = n - 1;
    int l = 0;
    int i = 0;
    while (l <= r)
    {
        if (!(i % 2))
        {
            if (t[l] > t[r])
            {
                s += t[l];
                l++;
            }
            else
            {
                s += t[r];
                r--;
            }
        }
        else
        {
            if (t[l] > t[r])
            {
                d += t[l];
                l++;
            }
            else
            {
                d += t[r];
                r--;
            }
        }
        i++;
    }

    cout << s << " " << d;
    return 0;
}
