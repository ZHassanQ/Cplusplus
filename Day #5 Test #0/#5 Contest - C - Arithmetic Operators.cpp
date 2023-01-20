#include<iostream>
using namespace std;

int main()
{
	float a, b, c;

	cin >> a >> b >> c;

	if (a + b == c)
	{
		cout << "+ ";
	}
	//------------------
	if (a - b == c)
	{
		cout << "- ";
	}
	//------------------
	if (a * b == c)
	{
		cout << "* ";
	}
	//------------------
	if (a / b == c)
	{
		cout << "/ ";
	}
}