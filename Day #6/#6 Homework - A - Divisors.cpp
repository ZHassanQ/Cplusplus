#include<iostream>
using namespace std;

int main()
{
	/*
	int n, x = 1;
	cin >> n;

	if (n / x > 0)
	{
		while (x <= n && n % x == 0)
		{
			{
				cout << n / x << endl;
				x++;
			}
		}
	}
	cout << 1;
	*/

	int x;
	cin >> x;

	for (int i = 1; i <= x; i++)
	{
		if (x % i == 0)
		{
			cout << i << endl;
		}
	}
}