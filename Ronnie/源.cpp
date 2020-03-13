#include<iostream>	
#include<string>
using namespace std; 
int main()
{
	const int Month = 12, Year = 3;
	int sale[Year][Month], sum[3] = { 0 };
	cout << "Enter the sales data of each year£º\n";
	for (int i = 0; i < 3; i++)
	{
		cout << "Year " << i+1 << " : " << endl;
		for (int j = 0; j <= 11; j++)
		{
			cout << j+1 << " : ";
			cin >> sale[i][j];
			sum[i] += sale[i][j];
		}
	}
	cout << "The total sales of each year are:\n";
	for (int i = 0; i <= 2; i++)
	{
		cout << "Year " << i+1 << " : " << sum[i] << endl;
	}
	return 0;
}