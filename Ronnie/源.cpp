#include<iostream>
using namespace std;
int main()
{
	int day;
	cout << "Enter a number of one day in a week:	";
	cin >> day;
	if (day < 8 && day>0)
		switch (day)
		{
		case 1:cout << "Monday"; break;
		case 2:cout << "Tuesday"; break;
		case 3:cout << "Wednesday"; break;
		case 4:cout << "Thursday"; break;
		case 5:cout << "Friday"; break;
		case 6:cout << "Saturday"; break;
		case 7:cout << "Sunday"; break;
		}
	else cout << "Please enter a integer from 1 to 7.";
	return 0;
}
