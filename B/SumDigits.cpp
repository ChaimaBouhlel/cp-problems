#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    string n;
    cin >> n;
    int i = 0;
    while (n.length()>1)
    {
        int co = 0;
        for (char c : n)
        {
            int x = c - '0';
            co += x;
        }
        n = to_string(co);
        i++;
    }
    cout << i;
    return 0;
}
