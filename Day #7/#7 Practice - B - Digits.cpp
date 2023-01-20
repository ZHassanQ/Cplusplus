
#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int x;
		cin >> x;
		//-------------------------------------
		if (x == 0)
		{
			cout << 0;
		}
		//-------------------------------------
		while (x > 0)
		{
			cout << x % 10 << " ";
			x = x / 10;
		}
		cout << endl;
	}
}