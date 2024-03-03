#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <map>

using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    vector<ll> v;
    for (ll i = 1; i * i <= n; i++)
    {
        if (!(n % i))
        {
            v.push_back(i);
            v.push_back(n / i);
        }
    }
    sort(v.begin(), v.end());
    int m = v.size();
    ll ans;
    for (ll i = m - 1; i >= 0; i--)
    {
        int flag =0;
        for (ll j = 2; j*j <= v[i]; j++)
        {
            if (v[i]%(j*j)==0)
            {
                flag = 1; 
                break;
            }
        }
        if (!flag)
        {
            ans=v[i];
            break;
        }
    }
    cout << ans;
    return 0;
}