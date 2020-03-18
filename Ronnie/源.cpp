#include<iostream>
using namespace std;
int main()
{
	cout << "Later I will display all the narcissistic number between 100 and 999: " << endl;
	int total = 0;
	for (int num = 100; num < 1000; num++)
	{
		int a, b, c;
		a = num / 100;
		b = num / 10 % 10;
		c = num % 10;
		if (num == c * c * c + b * b * b + a * a * a)
		{
			cout << num << endl;
			total++;
		}
	}
	cout << endl << "A total of " << total << " numbers.";
	return 0;
}