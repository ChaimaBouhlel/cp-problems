#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int pl = 0;
    int x;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x == -1)
        {
            if (pl >= 1)
            {
                pl--;
            }
            else
            {
                count++;
            }
        }else
        {
            pl+=x;
        }
        
    }
    cout << count;
    return 0;
}
