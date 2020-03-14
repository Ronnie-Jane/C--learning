#include<iostream>	
#include<string>
#include<cstring>
using namespace std; 
int main()
{
	int row;
	cout << "Enter number of rows: ";
	cin >> row;
	for (int a=1; a <= row; a++)
	{
		for (int b = 1; b <= row-a; b++)
		{
			cout << '.';
		}
		for (int c = 1; c <= a; c++)
		{
			cout << '*';
		}
		cout << endl;
	}
}