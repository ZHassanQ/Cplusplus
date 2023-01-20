#include<iostream>
using namespace std;

int main()
{
	int A, B, C;
	char s, q;

	cin >> A >> s >> B >> q >> C;

		if (s == '+')
		{
			if (A + B == C)
			{
				cout << "Yes";
			}
			else
			{
				cout << A + B;
			}
		}
		else if (s == '*')
		{
			if (A * B == C)
			{
				cout << "Yes";
			}
			else
			{
				cout << A * B;
			}
		}
		else if (s == '-')
		{
			if (A - B == C)
			{
				cout << "Yes";
			}
			else
			{
				cout << A - B;
			}
		}

}