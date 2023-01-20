#include<iostream>
using namespace std;

int main()
{
	float a, b, c;

	cin >> a >> b >> c;

		if (a + b == c)
		{
			cout <<  "+ ";
		}
		//------------------
		else if (a - b == c)
		{
			cout << "- ";
		}
		//------------------
		else if (a * b == c)
		{
			cout << "* ";
		}
		//------------------
		else if (a / b == c)
		{
			cout << "/ ";
		}
		//------------------
}