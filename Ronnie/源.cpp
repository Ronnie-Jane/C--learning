#include<iostream>	
#include<string>
using namespace std; 
int main()
{
	const int ArSize = 100;
	long double factorial[100] = { 1 };
	for (int i = 1; i < 100; ++i)
		factorial[i] = i * factorial[i - 1];
	for (int i = 1; i < 100; i++)
		cout << i << "! =" << factorial[i] << endl;
	return 0;
}