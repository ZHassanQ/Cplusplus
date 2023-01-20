#include<iostream>
using namespace std;
 
int main()
{
    int a[100005], n, min = 1000005, pos;
 
    cin >> n;
 
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];

        if(a[i] < min)
        {
            min = a[i];
            pos = i;
        }
    }

    cout << min << " " << pos;
}