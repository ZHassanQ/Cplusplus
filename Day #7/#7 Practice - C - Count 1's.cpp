#include<iostream>
using namespace std;

int main()
{
	int x, c;
	c = 0;

	cin >> x;

	while (x > 0)
	{
		c+= x % 2;
		x = x / 2;
	}
	cout << c;
}
/*

Demical to Binary:

n % 2;
n / 2 % 2;
n / 2 % 2 / 2;
n / 2 % 2 / 2 % 2;
n / 2 % 2 / 2 % 2 / 2;
n / 2 % 2 / 2 % 2 / 2 % 2;

Until zero

*/