#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool sortcol(const vector<int> &v1, const vector<int> &v2)
{
    return v1[1] > v2[1];
}

int main()
{
    int n;
    long long m;
    cin >> n;
    cin >> m;
    vector<vector<int>> vec(m, vector<int>(2, 0));
    for (int i = 0; i < m; i++)
    {
        cin >> vec[i][0];
        cin >> vec[i][1];
    }
    sort(vec.begin(), vec.end(), sortcol);
    int c = 0;
    int s = 0;
    for (int i = 0; i < m; i++)
    {
        int j = 0;
        while (c < n && j < vec[i][0])
        {
            c++;
            j++;
            s += vec[i][1];
        }
    }
    cout << s;
    return 0;
}
