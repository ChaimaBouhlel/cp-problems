#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <math.h>

using namespace std;
/* int reverse (int a ){
    int b = 0;
    while (a){
        b = b *10 + a%10;
         a= a/10;
    }
    return b;
} */

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        string rs = "";
        string s, l;
        if (a.length() < b.length())
        {
            s = a;
            l = b;
        }
        else
        {
            s = b;
            l = a;
        }
        int m = 0;
        for (int j = 0; j < s.length(); j++)
        {
            int n1 = s[j] - '0';
            int n2 = l[j] - '0';
            int r = n1 + n2 + m;
            rs += to_string(r % 10);
            m = r / 10;
        }
        for (int j = s.length(); j < l.length(); j++)
        {
            int n2 = l[j] - '0';
            int r = n2 + m;
            rs += to_string(r % 10);
            m = r / 10;
        }
        if (m)
            rs += to_string(m);
        while ( rs.length()>1 && rs[0]=='0'){
            rs = rs.substr(1,rs.length()-1);
        }
        cout << rs << endl;
    }
}
