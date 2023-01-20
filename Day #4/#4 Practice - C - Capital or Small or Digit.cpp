#include<iostream>
using namespace std;
 
int main()
{
	char x;
	cin >> x;
 
	if (x >= 'A' && x <= 'Z')
	{
		cout << "ALPHA" << "\n";
		cout << "IS CAPITAL";
	}
	else if (x >= 'a' && x <= 'z')
	{
		cout << "ALPHA" << "\n";
		cout << "IS SMALL";
	}
	else
	{
		cout << "IS DIGIT";
	}
}
