#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s; 
    cin >> s;
    int count = 0;
    char prev = s[0];
    char curr;
    for (int i = 1; i < n; i++)
    {
         curr = s[i];
        if (prev == curr)
            count++;
        prev = curr;
    }
    cout << count;
    return 0;
}
