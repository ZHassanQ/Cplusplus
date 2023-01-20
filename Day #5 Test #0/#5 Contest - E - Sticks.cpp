#include<iostream>
using namespace std;

int main()
{
	int x[10],n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
	}
	for (int i = n-1; i >= 0; i--)
	{
	if (x[i] % 2 == 0)
	{
		cout << "even: " << x[i] << endl;
	}
	else
	{
		cout << "odd: " << x[i] << endl;
	}
	}
}