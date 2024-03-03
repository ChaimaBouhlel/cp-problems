#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    while (true)
    {
        if (a >= c)
        {
            cout << a;
            break;
        }
        if (a + b >= c)
        {
            cout << c;
            break;
        }
        c -= d;
        a += b;
    }
    return 0;
}
