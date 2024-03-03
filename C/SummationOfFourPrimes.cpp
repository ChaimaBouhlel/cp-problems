#include <bits/stdc++.h>

using namespace std;

#define ll long long

vector<ll> primes(4,0);
vector<bool> prime;

void sieve(){
    prime.resize(10000001, true);
    prime[1]=false;
    for (ll i = 2; i*i <= 10000000; ++i) {
        if (prime[i]){
            for (int j = i*i; j < 10000000; j+=i) {
                prime[j]= false;
            }
        }
    }
}

void evenToTwoPrimes(ll n) {
    for (ll i =2 ; i<=n/2 ; i++){
        if (prime[i] && prime[n-i]){
            primes[2] = i;
            primes[3] = n-i;
            break;
        }
    }
}

int main() {
    ll s;
    sieve();
    while (cin >> s) {
        if (s<=7)
            cout <<"Impossible."<<endl;
        else{
            if (s%2 == 0){
                primes[0]=2;
                primes[1]=2;
                evenToTwoPrimes(s - 4);
            } else{
                primes[0]=3;
                primes[1]=2;
                evenToTwoPrimes(s - 5);
            }
            cout << primes[0] << " " << primes[1] << " " << primes[2] << " " << primes[3] <<endl;
        }
    }
    return 0;
}