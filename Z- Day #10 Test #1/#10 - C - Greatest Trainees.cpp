#include<iostream>
using namespace std;
 
int main()
{
    int a[100005], n, x;
 
    cin >> n >> x;
 
    for(int i = 0; i < n; i++)
    {
         cin >> a[i];
 
         if(a[0] + x > a[1])
         {
            cout << "yes ";
         }
         else
         {
            cout << "no ";
         }
    }
}