#include<iostream>
using namespace std;

int main()
{
	int A, B;
	char s;

	cin >> A >> s >> B;

		if (s == '>')
		{
			if(A > B)
			cout << "Right";
			
			else
			{
				cout << "Wrong";
			}
		}
		//------------------
		else if (s == '<')
		{
			if (B > A)
				cout << "Right";

			else
			{
				cout << "Wrong";
			}
		}
		//------------------
		else if (s == '=')
		{
			if (A == B)
				cout << "Right";

			else
			{
				cout << "Wrong";
			}
		}
}