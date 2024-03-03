#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <map>

using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)
#define md                  10000007
#define pb                  push_back
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

int main()
{
  int n;
      ll x,y,ans=0;
      map<ll,int>mp1,mp2;
      map< pair<ll,ll>,ll > mp;
      cin >>n;
      ll  a[n];
      for(int i=0;i<n;i++)
      {
          cin>>x>>y;
          ans+=mp1[x]++;
          ans+=mp2[y]++;
          ans-=mp[ make_pair(x,y)]++;
      }
      pfl(ans);

return 0;
}