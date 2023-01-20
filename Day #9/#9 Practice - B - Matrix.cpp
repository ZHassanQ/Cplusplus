#include<iostream>
using namespace std;
 
int main()
{
    int a[105][105], n, sum1st = 0, sum2nd = 0;

    cin >> n;
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
        cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum1st += a[i][j];
            }

            if (n - 1 - i == j)
            {
                sum2nd += a[i][j];
            }
        }
    }

    if (sum1st - sum2nd < 0)
    {
        cout << (sum1st - sum2nd) * -1;
    }
    else
    {
        cout << sum1st - sum2nd;
    }
}