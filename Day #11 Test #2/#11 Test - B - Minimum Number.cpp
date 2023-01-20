#include<iostream>
using namespace std;

int main()
{
    long long a, x;
    cin >> a;

    if(a % 10 == 0)
    {
    cout << 0;
    }
//------------------------------------
    long long modules = a%10;
    
    if (modules == 0)
    {
        cout << 0;
    }
    else
    {
        cout << 10 - modules;
    }
}