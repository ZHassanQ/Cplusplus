#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	if (num % 2 == 0 && num % 10 != 7 && num % 10 != 4)
	{
		cout << "unlucky even";
	}
	else if (num % 2 == 0 && num % 10 != 7 && num % 10 == 4)
	{
		cout << "lucky even";
	}
	else if (num % 2 == 0 && num % 10 == 7 && num % 10 != 4)
	{
		cout << "lucky even";
	}
	//---------------------------------
	else if (num % 2 != 0 && num % 10 != 7 && num % 10 != 4)
	{
		cout << "unlucky odd";
	}
	else if (num % 2 != 0 && num % 10 != 7 && num % 10 == 4)
	{
		cout << "lucky odd";
	}
	else if (num % 2 != 0 && num % 10 == 7 && num % 10 != 4)
	{
		cout << "lucky odd";
	}
}