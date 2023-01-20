#include<iostream>
using namespace std;
 
int main()
{
    int a[1005], n;
 
    cin >> n;
 
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];

        if(a[i] <= 10)
        {
            cout << "A[" << i << "] = " << a[i] << endl;
        }
    }
}