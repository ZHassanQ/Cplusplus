#include<iostream>
using namespace std;

int main()
{
	int x;
	bool ch = true;

	cin >> x;

	for (int i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			ch = false;
		}
	}
//-------------------------------------
	if (ch == true)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}