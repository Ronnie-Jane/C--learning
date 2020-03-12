#include<iostream>	
#include<cstring>
#include<string>
using namespace std;
int main()
{
	struct pizzastore
	{
		char brand[15];
		int diameter;
		int weight;
	}pizza[10];
	cout << "Enter the name of a pizza: ";
	cin.getline(pizza[0].brand, 15);
	cout << "Enter the diameter of the pizza: ";
	cin >> pizza[0].diameter;
	cout << "Enter the weight of the pizza: ";
	cin >> pizza[0].weight;
	cout << "This is the information of the pizza you choose: "
		<< pizza[0].brand << " " << pizza[0].diameter << " " << pizza[0].weight;
	return 0;
}