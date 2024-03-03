#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>

using namespace std;

char findSmall(string s)
{
    char l1 = s[0];
    char l2 = s[2];
    char op = s[1];
    if (op == '<')
        return l1;
    return l2;
}
char findBig(string s)
{
    char l1 = s[0];
    char l2 = s[2];
    char op = s[1];
    if (op == '<')
        return l2;
    return l1;
}

int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    char sm1 = findSmall(s1);
    char sm2 = findSmall(s2);
    char sm3 = findSmall(s3);
    char bg1 = findBig(s1);
    char bg2 = findBig(s2);
    char bg3 = findBig(s3);
    string rs = "";
    if (sm1 == sm2)
    {
        rs += ((sm1));
        rs += ((sm3));
        rs += ((bg3));
    }
    else if (sm3 == sm2)
    {
        rs += ((sm2));
        rs += ((sm1));
        rs += ((bg1));
    }
    else if (sm1 == sm3)
    {
        rs += ((sm1));
        rs += ((sm2));
        rs += ((bg2));
    }
    if (rs.length())
        cout << rs;
    else
        cout << "Impossible";
}
