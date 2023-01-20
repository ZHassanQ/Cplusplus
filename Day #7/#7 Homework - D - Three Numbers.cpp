#include<iostream>
using namespace std;
 
int main()
{
    int k, s, c = 0;
    cin >> k >> s;

    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            int h = s- (i + j);
            {
                if (h >= 0 && h <= k)
                {
                    c++;
                }
            }
        }
    }
    cout << c;
}