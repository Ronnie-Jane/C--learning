#include<iostream>	
#include<cstring>
#include<string>
using namespace std; 
struct pizzastore
{
	char brand[15];
	int diameter;
	int weight;
};
int main()
{
	pizzastore* ps = new pizzastore;
	cout << "Enter the name of a pizza: ";
	cin.getline(ps->brand, 15);
	cout << "Enter the diameter of the pizza: ";
	cin >> ps->diameter;
	cout << "Enter the weight of the pizza: ";
	cin >> (*ps).weight;
	cout << "This is the information of the pizza you choose: "
		<< ps->brand << " " << ps->diameter << " " << ps->weight;
	delete ps;
	return 0;
}