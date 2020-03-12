#include<iostream>	
#include<cstring>
#include<string>
using namespace std; 
struct CandyBar
{
	char brand[15];
	float weight;
	int calorie;
};
int main()
{
	CandyBar* pc = new CandyBar[3];
	cout << "Enter a candy brand: ";
	cin.getline(pc[0].brand, 15);
	cout << "Enter the weight: ";
	cin >> pc[0].weight;
	cout << "Enter the calorie: ";
	cin >> pc[0].calorie;
	cout << "Now this is the information of a candy:\n"
		<< "Brand: " << pc[0].brand << endl << "Weight: " << pc[0].weight << endl
		<< "Calorie: " << pc[0].calorie;
	return 0;
}