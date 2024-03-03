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
    ll r;
    string s;
    cin >> s;
    int ra = 0, rb = 0, rc = 0;
    ra = count(s.begin(), s.end(), 'B');
    rb = count(s.begin(), s.end(), 'S');
    rc = count(s.begin(), s.end(), 'C');
    int na, nb, nc;
    cin >> na >> nb >> nc;
    int pa, pb, pc;
    cin >> pa >> pb >> pc;
    cin >> r;

    int prix = ra * pa + rb * pb + rc * pc;
    ll res = 0;

    // nchoufo li andna kadech ynajmo yaamloulna
    int ca = 101, cb = 101, cc = 101;
    if (ra > 0)
        ca = na / ra;
    if (rb > 0)
        cb = nb / rb;
    if (rc > 0)
        cc = nc / rc;

    int ch = min(cc, min(ca, cb));
    res += ch;

    na -= ch * ra;
    nb -= ch * rb;
    nc -= ch * rc;
    if (!ra)
    {
        na = 0;
    }
    if (!rb)
    {
        nb = 0;
    }
    if (!rc)
    {
        nc = 0;
    }
    int ma = 0, mb = 0, mc = 0;
    ll reste = r;
    while (reste > 0 && (!(na == 0 && nb == 0 && nc == 0)))
    {
        if (na < ra)
            ma = ra - na;
        if (nb < rb)
            mb = rb - nb;
        if (nc < rc)
            mc = rc - nc;
        reste -= ma * pa + mb * pb + mc * pc;
        if (reste >= 0)
        {
            res++;
            if (na < ra)
                na = 0;
            else
            {
                na -= ra;
            }
            if (nb < rb)
                nb = 0;
            else
            {
                nb -= rb;
            }
            if (nc < rc)
                nc = 0;
            else
            {
                nc -= rc;
            }
        }
    }
    res += reste / prix;
    cout << res;
}