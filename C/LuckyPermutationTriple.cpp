#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (!(n % 2))
    {
        cout << -1;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << (i + 1) % n << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << (2 * i + 1) % n << " ";
    }
    cout << endl;
}
