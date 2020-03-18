#include<iostream>
#include<cctype>
using namespace std; 
int main()
{
	double num[10], sum = 0,aver=0;
	int count, biger=0;
	cout << "Enter no more than 10 double values:";
	for (count = 0; count < 10&&cin>>num[count]; count++)
	{
		cout << "value " << count+1 << " : " << num[count] << endl;
		sum += num[count];
	}
	aver = sum / count;
	for (int i = 0; i <= count; i++)
	{
		if(num[i]>aver)	
		biger++;
	}
	cout << "You entered " << count << " double values, the average of them is " << endl
		<< aver << ". And " << biger << " values are biger than average.";
	return 0;
}