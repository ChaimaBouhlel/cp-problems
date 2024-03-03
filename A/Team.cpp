#include <iostream>
using namespace std;

int main()
{
    int co = 0;
    int mat[5][5];
    int indi, indj = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j]){
                indi = i;
                indj = j;
            }
        }
    }
    cout << abs(indj - 2) + abs(indi -2);
}