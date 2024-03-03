#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a1, a2, a3, a4;
    cin >> a1;
    cin >> a2;
    cin >> a3;
    cin >> a4;
    int count = 0;
    string s;
    cin >> s;
    for (char c : s)
    {
        if (c == '1')
            count += a1;
        else if (c == '2')
            count += a2;
        else if (c == '3')
            count += a3;
        else
            count += a4;
    }
    cout << count;
    return 0;
}
