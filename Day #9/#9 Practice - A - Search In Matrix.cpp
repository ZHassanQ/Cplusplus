#include<iostream>
using namespace std;
 
int main()
{
    int a[105][105], n, m, x;
    bool ch=false;
    cin >> n >> m;
 
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
            cin >> a[i][j];
            }
        }
 
        cin >> x;
 
        for (int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
             if(x == a[i][j])
              {
                ch = true;
              }
            }
        }
 
    if (ch == true)
    {
        cout << "will not take number";
    }
    else
    {
        cout << "will take number";
    }  
}