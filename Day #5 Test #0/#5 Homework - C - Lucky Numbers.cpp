#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a;

	b = a % 10;
	c = a / 10;

	if (b % c == 0)
	{
		cout << "YES";
	}
	else if (c % b == 0)
	{
		cout << "YES";
	}
	//-------------------
	else
	{
		cout << "NO";
	}
}