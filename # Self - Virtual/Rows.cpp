#include<iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;

	for (int i = x*2; i > x; i--)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << " *";
		}
		cout << endl;
	}
}