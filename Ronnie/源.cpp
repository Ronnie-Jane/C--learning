#include<iostream>
using namespace std;
double factorial(int n);
void main()
{
	int n;
	double fac;
	cout << "Enter an upright integer: ";
	cin >> n;
	fac = factorial(n);
	cout << "The factorial of integer " << n << " is " << fac;
}

double factorial(int n)
{
	double fac=1;
	if (n > 0)
		fac = n * factorial(n - 1);
	else if (n == 0)
		fac = 1;
	else if (n < 0)
		cout << "Please enter an integer!";
	return fac;
}