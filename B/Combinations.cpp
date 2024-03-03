/* #include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <math.h>
#include <iomanip>
using namespace std;

int pgcd(int a, int b)
{
    if (b > a)
        return pgcd(b, a);
    int r;
    r = a % b;
    while (r)
    {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}

int main()
{
    int n, p;
    while (cin >> n >> p, n || p)
    {
        if (p > (n / 2 + n % 2))
            p = n - p;
        long long c = 1, y = 1;
        vector<int> v1, v2;
        for (int i = 0; i <= p - 1; i++)
        {
            int x = (n - i) % (p - i);
            if (!x)
            {
                c *= (n - i) / (p - i);
            }
            else
            {
                y *= (p - i);
                c *= (n - i);
            }
        }
        c/=y;
        cout <<n <<" things taken "<<p<<" at a time is "<<c<<" exactly."<<endl;
    }
}
 */
#include <cstdio>
using namespace std;

long long a[101][101];

int main() {
	int n, m;
	a[1][1] = 1;
	a[1][0] = 1;

	for (int i = 2; i <= 100; i++) {
		a[i][0] = 1;
		for (int j = 1; j <= i; j++) {
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
		}
	}

	while (scanf("%d%d", &n, &m), n || m) {
		printf("%d things taken %d at a time is %lld exactly.\n", n, m,
				a[n][m]);
	}

	return 0;
}