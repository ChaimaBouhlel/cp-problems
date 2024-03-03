#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int t[n];
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }
    int s = sizeof(t) / sizeof(t[0]);
    sort(t, t + s);
    for (int i = 0; i < n; ++i)
        cout << t[i] << " ";
    return 0;
}
