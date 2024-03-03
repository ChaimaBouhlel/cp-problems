#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n;
    vector<int> vec(n+1,0);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        vec[x] = i;
    }
    cin >> m;
    vector<int> quer;
    long long v=0, p=0;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        v += vec[x];
        p += n-vec[x] + 1;
    }

    cout << v << " " << p;
}
