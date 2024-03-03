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
    string a;
    cin>> a;
    vector<int> v(8, 0);
    for (int i = 0; i < n; i++)
    {
        switch (a[i])
        {
        case '2':
            v[2]++;
            break;
        case '3':
            v[3]++;
            break;
        case '4':
            v[2] += 2;
            v[3]++;
            break;
        case '5':
            v[5]++;
            break;
        case '6':
            v[5]++;
            v[3]++;
            break;
        case '7':
            v[7]++;
            break;
        case '8':
            v[2]+=3;
            v[7]++;
            break;
        case '9':
            v[3]+=2;
            v[2]++;
            v[7]++;
            break;
        default:
            break;
        }
    }
    for (int i = 7; i >=2; i--)
    {
        if (v[i]>0){
            for (int j = 0; j < v[i]; j++)
            {
                cout<<i;
            }
            
        }
    }
    
}
