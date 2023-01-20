#include <iostream>
using namespace std;

int main()
{
	char s;
	int n, x;

	cin >> s;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x;

		for (int j = 0; j < x; j++)
		{
			cout << s;
		}
		cout << endl;
	}
}