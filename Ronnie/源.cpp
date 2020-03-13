#include<iostream>	
#include<string>
using namespace std; 
int main()
{
	int Danpne = 100,count = 0;
	float Cleo = 100;
	cout << "Danpne and Cleo both invest 100 dollars but get reward in diffrent ways.";
	for (; Danpne>= Cleo; count++)
	{
		Danpne += 10;
		Cleo *= 1.05;
	}
	cout << endl << count << " years later,Cleo's money becomes the more."
		<<endl << "Danpne get " << Danpne << " dollars and Cleo gets " << Cleo << " dollars";
	return 0;
}