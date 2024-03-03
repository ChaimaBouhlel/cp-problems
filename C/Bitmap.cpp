#include<bits/stdc++.h>


using ll = long long int;
using namespace std;
#define loop(i, a, b)           for(ll i=a;i<=b;++i)

int main() {
    int t;
    cin >> t;
    loop(i, 1, t) {
        int n, m;
        cin >> n >> m;
        int v[n][m];
        loop(j, 0, n - 1) {
            loop(k, 0, m - 1) {
                cout << v[j][k];
            }
        }
        int r[n][m];
        loop(j, 0, n - 1) {
            loop(k, 0, m - 1) {
                if (v[j][k] == 1) {
                    r[j][k] = 0;
                }else{
                    int min = m + n;

                }
            }
        }
    }
}