#include<iostream>	
#include<string>
#include<cstring>
using namespace std; 
int main()
{
	string word;
	cout << "Enter words (to stop, type the word done):" << endl;
	int count = 0;
	while (word!="done")
	{
		cin >> word;
		count++;
	}
	cout<<endl << "You entered a total of " << count-1 << " words.";
	return 0;
}