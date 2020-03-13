#include<iostream>	
#include<string>
using namespace std; 
int main()
{
	int num[5] = { 1,2,3,4,5 };
	for (int x : num)
		cout << x << " ";
	cout << endl;
	for (int& x : num)
	{
		x *= x;
		cout << x << " ";
	}
	cout << endl;
	for (int numm : {1, 3, 5, 7, 9})
		cout << numm << " ";
	return 0;
}