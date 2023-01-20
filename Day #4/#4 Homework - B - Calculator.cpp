#include<iostream>
using namespace std;

int main()
{
	long long A, B;
	char s;

	cin >> A >> s >> B;

		if (s == '+')
		{
			cout << A + B;
		}
		//------------------
		else if (s == '*')
		{
			cout << A * B;
		}
		//------------------
		else if (s == '-')
		{
			cout << A - B;
		}
		//------------------
		else if (s == '/')
		{
			cout << A / B;
		}
		//------------------
		else if (s == '%')
		{
			cout << A % B;
		}
}