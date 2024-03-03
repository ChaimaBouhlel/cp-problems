#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <map>

using namespace std;

#define ll long long

vector<bool> prime;
void sieve(){
    prime.resize(20000001, true);
    prime[1]=false;
    for (ll i = 2; i*i <= 20000000; ++i) {
        if (prime[i]){
            for (int j = i*i; j < 20000000; j+=i) {
                prime[j]= false;
            }
        }
    }
}

int main()
{
    int s;
    vector<pair<long long, long long>> v(100001);
    ll i = 1;
    v[1] = make_pair(3,5);
    sieve();
    for (int j = 2; j < 100001; j++)
    {
        ll p1, p2;
        p1 = i * 6 - 1, p2 = i * 6 + 1;
        while (!prime[p1] || !prime[p2] )
        {
            i++;
            p1 = i * 6 - 1;
            p2 = i * 6 + 1;
        }
        i++;
        v[j] = make_pair(p1,p2);
    }

    while (cin >> s)
    {
        cout << "(" << v[s].first << ", " <<v[s].second << ")" << endl;
    }
    return 0;
}