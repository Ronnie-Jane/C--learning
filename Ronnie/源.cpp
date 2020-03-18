#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("Galway Girl.txt");
	char ch;
	int count = 0;
	fin.get(ch);
	while (fin.good())
	{
		cout << ch;
		if (isalpha(ch))
			count++;
		fin.get(ch);
	}
	cout << "File end reached.";
	return 0;
}