#include<iostream>
using namespace std;

int main()
{
	int n, a;
	cin >> n;
	a = n % 365;

	cout << n / 365 << " years" << endl;
	cout << a / 30 << " months" << endl;
	cout << a % 30 << " days";
}