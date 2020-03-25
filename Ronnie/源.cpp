#include<iostream>
using namespace std;
void print(int n);
int main()
{
	cout << "Enter an integer: ";
	int n;
	cin >> n;
	print(n);
}

void print(int n)
{
	if (n > 1)
		print(n-1);
	for (int i = 0; i < n; i++)
		cout << n << '\t';
	cout << endl;
}