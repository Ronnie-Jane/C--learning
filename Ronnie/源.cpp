#define _CRT_SECURE_NO_WARNINGS
#include<iostream>	
#include<cstring>
using namespace std;
int main()
{
	char f_name[10], l_name[20];
	cout << "Enter your first name: ";
	cin >> f_name;
	cout << "Then enter your last name: ";
	cin >> l_name;
	strcat(l_name, " ,");
	strcat(l_name, f_name);
	cout << "Here's the information in a single string: " << l_name;
	return 0;
}