#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <math.h>
#include <iomanip>
using namespace std;

int pgcd(int a, int b)
{
    if (b > a)
        return pgcd(b, a);
    int r;
    r = a % b;
    while (r)
    {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}

int main()
{
    int n;
    while (cin >> n && n > 0)
    {
        vector<int> vec;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            vec.push_back(x);
        }
        int co = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (pgcd(vec[i], vec[j]) == 1)
                {
                    co++;
                }
            }
        }
        if (co)
        {
            double pi = sqrt(6.000000 *(n*(n-1)/2)/co);
            printf("%.6f\n",pi);
        }else{
            cout << "No estimate for this data set."<<endl;
        }
    }
}
