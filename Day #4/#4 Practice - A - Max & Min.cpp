#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	//--------------------------------
	if (a <= b && a <= c && b >= c)
	{
		cout << a << " " << b;
	}
	else if (a <= b && a <= c && c >= b)
	{
		cout << a << " " << c;
	}
	//--------------------------------
	else if (b <= a && b <= c && a >= c)
	{
		cout << b << " " << a;
	}
	else if (b <= a && b <= c && c >= a)
	{
		cout << b << " " << c;
	}
	//--------------------------------
	else if (c <= a && c <= b && a >= b)
	{
		cout << c << " " << a;
	}
	else if (c <= a && c <= b && b >= a)
	{
		cout << c << " " << b;
	}
}