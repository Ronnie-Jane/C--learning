#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	bool d;
	cout << "Enter three numbers and I will tell if they can compose a triangle:";
	cin >> a >> b >> c;
	if (a < b + c&&b<a+c&&c<a+b)
		d = true;
	else d = false;
	if (d == true)
	{
		if (a == b && b == c)
			cout << endl << "This is a equilateral triangle.";
		else if (a == b || b == c || a == c)
			cout << endl << "This is a isosceles triangle.";
		else cout << endl << "This is an ordinary triangle.";
	}
	else cout << "These cannot compose a triangle.";
	return 0;
}