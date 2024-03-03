#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 1;
    int prev;
    cin >> prev;
    int curr;
    for (int i = 1; i < n; i++)
    {
        cin >> curr;
        if (prev % 10 == curr / 10)
            count++;
        prev = curr;
    }
    cout << count;
    return 0;
}
