#include <iostream>
using namespace std;

int main()
{
	int n, rev = 0;
	cin >> n;

	int q = n;

	while (q > 0)
	{
		rev = (rev * 10) + q % 10;
		
		q = q / 10;
	}
	cout << rev << endl;
//-------------------------------------
	if (n == rev)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}