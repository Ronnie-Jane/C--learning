#include<iostream>	
#include<string>
using namespace std; 
int main()
{
	struct car
	{
		string maker;
		int year;
	};
	int a;
	cout << "How many cars fo you wish to catalog? ";
	cin >> a;
	car* data = new car[a];
	for (int i = 0; i < a; i++)
	{
		cout << "Car #" << i+1 << " :" << endl
			<< "Please enter the maker£º ";
		cin.get();
		getline(cin, data[i].maker);
		cout << "Please enter the year made: ";
		cin >> data[i].year;
	}
	cout << "Here is you collection:\n";
	for (int i = 0; i < a; i++)
	{
		cout << data[i].year << '\t' << data[i].maker << endl;
	}
	return 0;
}