#include<iostream>	
#include<cctype>
using namespace std; 
int main()
{
	char ch;
	cout << "Enter words or sentences(type @ to quit): ";
	cin.get(ch);
	while (ch != '@')
	{
		if (isupper(ch))
			ch = tolower(ch), cout << ch;
		else ch = toupper(ch), cout << ch;
		cin.get(ch);
	}
	return 0;
}