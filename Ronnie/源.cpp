#include<iostream>	
#include<string>
using namespace std; 
int main()
{
	string month[12] =				//or char*month[12]=
	{
		"January","February","March","April","May","June","July",
		"August","September","October","November","December"
	};
	int sale[12], sum=0;
	cout << "Enter the sales of 12 months: ";
	for (int i = 0; i <= 11; i++)
	{
		cout << month[i] << " :___\b\b\b";
		cin >> sale[i];
		sum += sale[i];
	}
	cout << "During the whole year, " << sum << " books have been sold.";
	return 0;
}