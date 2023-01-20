#include<iostream>
using namespace std;

int main()
{
	long long a, b, c;
	cin >> a >> b >> c;
	//--------------------------------
	if (a <= b && a <= c && b >= c)
	{
		cout << a << endl;
		cout << c << endl;
		cout << b << endl;
		cout << endl;
		cout << a << endl;
		cout << b << endl;
		cout << c;
	}
	else if (a <= b && a <= c && c >= b)
	{
		cout << a << endl;
		cout << b << endl;
		cout << c << endl;
		cout << endl;
		cout << a << endl;
		cout << b << endl;
		cout << c;
	}
	//--------------------------------
	else if (b <= a && b <= c && a >= c)
	{
		cout << b << endl;
		cout << c << endl;
		cout << a << endl;
		cout << endl;
		cout << a << endl;
		cout << b << endl;
		cout << c;
	}
	else if (b <= a && b <= c && c >= a)
	{
		cout << b << endl;
		cout << a << endl;
		cout << c << endl;
		cout << endl;
		cout << a << endl;
		cout << b << endl;
		cout << c;
	}
	//--------------------------------
	else if (c <= a && c <= b && a >= b)
	{
		cout << c << endl;
		cout << b << endl;
		cout << a << endl;
		cout << endl;
		cout << a << endl;
		cout << b << endl;
		cout << c;
	}
	else if (c <= a && c <= b && b >= a)
	{
		cout << c << endl;
		cout << a << endl;
		cout << b << endl;
		cout << endl;
		cout << a << endl;
		cout << b << endl;
		cout << c;
	}
}