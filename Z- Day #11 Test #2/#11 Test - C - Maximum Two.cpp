#include<iostream>
using namespace std;

int main()
{
   long long n, arr[100005], largest = -1e15, second = -1e15;
   cin >> n;

   for(int i = 0; i < n; i++)
   {
      cin >> arr[i]

      if(arr[i] > largest)
      {
         largest = arr[i];
      }
   }

   for(int i = 0; i < n; i++)
   {
      if(arr[i] > second && arr[i] != largest)
      {
         second = arr[i]
      }
   }
   cout << largest << "\n" << second;
}