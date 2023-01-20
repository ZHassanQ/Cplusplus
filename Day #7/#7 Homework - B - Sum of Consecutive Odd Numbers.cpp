#include<iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x, y, s = 0;
        cin >> x >> y;

        if (x >= y)
        {
            for (int i = y + 1; i < x; i++)
            {
                if ( i % 2 != 0)
                {
                    s += i;
                }
            }
        }
        else
        {
            for (int i = x + 1; i < y; i++)
            {
                if (i % 2 != 0)
                {
                    s += i;
                }
            }
        }
        cout << s << endl;
    }
}