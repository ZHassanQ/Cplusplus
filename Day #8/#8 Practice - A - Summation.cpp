#include<iostream>
using namespace std;

int main()
{
    int a[100005], n;
    long long s = 0;
 
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];

        s += a[i];
    }
    if(s < 0)
    {
        s = s * -1;
    }
    cout << s;
}