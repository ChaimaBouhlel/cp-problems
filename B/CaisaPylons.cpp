#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> vec[i];
    }
    int c = 0;
    int cur = 0;
    for (int i = 0; i < n; i++)
    {
        if (vec[i] - vec[i + 1] < 0)
        {
            if (cur < vec[i + 1] - vec[i])
            {
                c += vec[i + 1] - vec[i] - cur;
                cur = 0;
            }else{
                cur-= vec[i + 1] - vec[i];
            }
        }
        else
        {
            cur += vec[i] - vec[i + 1];
        }
    }
    cout << c;
    return 0;
}