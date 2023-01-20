#include<iostream>
using namespace std;

int main()
{
    int a[100005], n, x, po= -1;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> x;

    for (int i = 0; i < n; i++)
    {
        if(x == a[i])
        {
        po = i;
        break;
        }
    }
    cout << po;
}