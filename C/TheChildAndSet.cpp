#include<bits/stdc++.h>

#define loop(i, a, b)           for(ll i=a;i<=b;++i)
#define itoc(c)               ((char)(((int)'0')+c))
#define ctoi(c)               ((int)(((int)c)-'0'))
#define all(p)                p.begin(),p.end()

using ll = long long int;
using namespace std;

///////////////////////


int lowbit(int n) {
    int c = 0;
    while (n % 2 == 0) {
        c++;
        n /= 2;
    }
    return pow(2, c);
}

bool cmp(pair<int, int> &a,
         pair<int, int> &b) {
    return a.second > b.second;
}

int main() {
    int s, l;
    cin >> s >> l;
    vector<pair<int, int>> v;
    map<int, int> mp;
    map<int, int> mp2;
    loop(i, 1, l) {
        mp[i] = lowbit(i);
        mp2[lowbit(i)]++;
    }

    for (auto &it: mp) {
        v.emplace_back(it);
    }

    sort(v.begin(), v.end(), cmp);

    int ts = 0;
    int y = 0;
    vector<int> res;
    int x = 0;
    while (x <= v.size() - 1) {
        //cout << v[x].first << " => " << v[x].second << endl;
        ts += mp2[v[x].second] * v[x].second;
        int co = mp2[v[x].second];
        y += mp2[v[x].second];
        while (ts > s && co > 0) {
            ts -= v[x].second;
            co--;
            y--;
        }
        loop(k, 0, co - 1) {
            res.push_back(v[x + k].first);
        }
        x += mp2[v[x].second];
        if (ts == s)
            break;
    }

    if (ts == s) {
        cout << y << endl;
        loop(z, 0, res.size() - 1) {
            cout << res[z] << " ";
        }
    } else {
        cout << -1;
    }
}
