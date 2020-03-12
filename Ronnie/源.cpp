#include<iostream>	
#include<cstring>
#include<string>
using namespace std;
int main()
{
	string f_name, l_name;
	cout << "Enter your first name: ";
	cin >> f_name;
	cout << "Then enter your last name: ";
	cin >> l_name;
	l_name += ", ";
	l_name += f_name;
	cout << "Here's the information in a single string: " << l_name;
	return 0;
}