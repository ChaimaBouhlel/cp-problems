#include<bits/stdc++.h>

#define loop(i, a, b)           for(ll i=a;i<=b;++i)
#define itoc(c)               ((char)(((int)'0')+c))
#define ctoi(c)               ((int)(((int)c)-'0'))
#define all(p)                p.begin(),p.end()

using ll = long long int;
using namespace std;

///////////////////////


bool cmp(pair<int, int> &a,
         pair<int, int> &b) {
    return a.second > b.second;
}

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b / gcd(a, b));
}


int main() {
    int n, t;
    while (cin >> n >> t && n && t) {
        vector<int> vn;
        vector<int> vt;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            vn.push_back(x);
        }
        for (int i = 0; i < t; ++i) {
            int x;
            cin >> x;
            vt.push_back(x);
        }
        for (int i = 0; i < t; ++i) {
            int res_g = (1 << 30), res_l = 0;
            for (int c1 = 0; c1 < n; ++c1) {
                for (int c2 = c1 + 1; c2 < n; ++c2) {
                    for (int c3 = c2 + 1; c3 < n; ++c3) {
                        for (int c4 = c3 + 1; c4 < n; ++c4) {
                            int lcm12 = lcm(vn[c1], vn[c2]);
                            int lcm123 = lcm(lcm12, vn[c3]);
                            int lcm1234 = lcm(lcm123, vn[c4]);
                            int x = (vt[i] / lcm1234) * lcm1234;
                            if (x <= vt[i])
                                res_l = max(res_l, x);
                            if (x < vt[i]) {
                                res_g = min(res_g, x + lcm1234);
                            } else
                                res_g = min(res_g, x);
                        }
                    }
                }
            }
            cout << res_l << " " << res_g << endl;
        }

    }
}