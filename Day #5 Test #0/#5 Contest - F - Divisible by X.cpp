#include<iostream>
using namespace std;

int main()
{
	long long x, y, z;
	cin >> x >> y >> z;

	if (x >= y)
	{
		cout << x / z - (y - 1) / z;
	}
	else
	{
		cout << y / z - (x - 1) / z;
	}
}
