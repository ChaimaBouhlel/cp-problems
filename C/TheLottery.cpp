#include <bits/stdc++.h>

using namespace std;

#define ll long long

long long gcd(long long a, long long b) {
    return b == 0 ? a : gcd(b, a % b);
}

long long lcm(long long a, long long b) {
    return (a * b / gcd(a, b));
}

int main() {
    while (true) {
        ll N, M;
        if (!(cin >> N >> M)) {
            break;
        }

        vector<int> rn;

        for (int i = 0; i < M; ++i) {
            ll num;
            cin >> num;
            rn.push_back(num);
        }

        ll rs = N;
        vector<int> sign = {0, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1};
        for (ll i = 1; i < 1 << M; ++i) {
            int c = 0;
            ll j = i;
            vector<int> pos ;
            while (j) {
                if(j % 2 != 0){
                    pos.push_back(c);
                }
                c++;
                j /= 2;
            }
            ll prs = rn[pos[0]];
            for (int k = 1; k < pos.size(); ++k) {
                prs = lcm(prs,rn[pos[k]]);
            }
            rs -= sign[pos.size()] * N / prs;
        }

        cout << rs << endl;
    }
    return 0;
}
