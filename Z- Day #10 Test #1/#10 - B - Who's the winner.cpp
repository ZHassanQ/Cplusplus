#include <iostream>
using namespace std;
 
int main()
{
    int a[2][2], 
    row = 2, 
    col_n;

    cin >> col_n;
 
    for(int i = 0; i < col_n; i++)
    {
        cin >> a[0][0] >> a[0][1];

        for(int j = 0; j < col_n; j++)
        {
            cin >> a[1][0] >> a[1][1];
        }
    }
//-------------------------------------------------------
    if(a[0][0] + a[0][1] > a[1][0] + a[1][1])
    {
        cout << "Kid A";
    }
    else if(a[0][0] + a[0][1] < a[1][0] + a[1][1])
    {   
        cout << "Kid B";
    }
    else
    {
        cout << "Tie";
    }
}