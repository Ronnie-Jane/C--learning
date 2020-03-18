#include<iostream>
#include<cctype>
using namespace std; 
int main()
{
	cout << "Please enter one of the following choices: " << endl
		<< "A)	B)	" << endl << "C)	D)" << endl;
	char choice;
	while (!(cin >> choice&&choice>='A'&&choice<='D'))
	{
		cin.clear();
		while (cin.get() != '\n')
			continue;
		cout << "Please enter a choice! Now again: ";
	}
	switch (choice)
	{
	case'A':cout << "Give you an apple."; break;
	case 'B':cout << "I am a boy."; break;
	case 'C':cout << "I love Ciri."; break;
	case 'D':cout << "Naughty Dog"; break;
	}
	return 0;
}