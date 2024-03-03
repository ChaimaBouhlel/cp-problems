#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s = "";

    for (int i = 0; i < n / 7; i++)
        s += "ROYGBIV";

    string c = "ROYGBIV";
    if (n % 7 >= 4)
        s += c.substr(0, n % 7);
    else
        s += c.substr(3, n % 7);
    cout << s;
}
