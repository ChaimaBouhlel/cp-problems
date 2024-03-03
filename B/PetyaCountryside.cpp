#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int s = 1;
    int t[n];
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }
    int max = 1;
    for (int i = 0; i < n; i++)
    {
        s = 1;
        int l = i - 1, r = i + 1, j =i;
        while (l >= 0)
        {

            if (t[l] <= t[j])
            {
                s++;
                l--;
                j--;
            }else
            {
                break;
            }
            
        }j =i;
        while (r < n)
        {

            if (t[r] <= t[j])
            {
                s++;
                r++;
                j++;
            }else{
                break;
            }
        }
        if (s>max) max=s;
    }
    cout << max;
    return 0;
}
