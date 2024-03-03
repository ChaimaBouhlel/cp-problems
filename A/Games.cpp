#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int s = 0;
    int t[2][n];
    for (int i = 0; i < n; i++)
    {
        cin >> t[0][i];
        cin >> t[1][i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (t[0][i] == t[1][j] && j != i)
            s++;
        }
    }
    cout << s;
    return 0;
}
