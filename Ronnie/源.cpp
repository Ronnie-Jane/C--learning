#include<iostream>	
#include<array>
using namespace std; 
int main()
{
	array<float, 3> scores ;
	cout<<"Enter three results of 50 merters run: ";
	cin >> scores[0] >> scores[1] >> scores[2];
	cout << "Here are the results: "
		<< scores[0] << "\'s\n" << scores[1] << "\'s\n"
		<< scores[2] << "\'s";
	return 0;
}