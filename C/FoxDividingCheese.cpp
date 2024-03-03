#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <map>

using namespace std;

#define ll long long

ll divide(int a, int *ca)
{
    while (!(a % 2))
    {
        a = a / 2;
        ca[2]++;
    }
    while (!(a % 3))
    {
        a = a / 3;
        ca[3]++;
    }
    while (!(a % 5))
    {
        a = a / 5;
        ca[5]++;
    }
    return a;
}

int main()
{
    ll a, b;
    cin >> a >> b;
    int ca[6] = {0};
    int cb[6] = {0};
    a = divide(a, ca);
    b = divide(b, cb);
    if (a != b)
    {
        cout << -1;
    }
    else
    {
        cout << abs(ca[2] - cb[2]) + abs(ca[3] - cb[3]) + abs(ca[5] - cb[5]);
    }
}