#include <iostream>
using namespace std;

int main()
{
    int a, b ;
    cin >> a;
    cin >> b;
    int co=0;
    while (a <= b)
    {
        co++;
        a*= 3;
        b*=2;
    }
    cout << co;
}