#include<iostream>
using namespace std;
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void show(box);
void calculate(box*);
void input(box*);
int main()
{
	box aa;
	input(&aa);
	show(aa);
	calculate(&aa);
	cout << "The volume of your box is: " << aa.volume;
}

void input(box*a)
{
	cout << "What's the maker?";
	cin >> a->maker;
	cout << "Enter each value(meter):" << endl
		<< "height: ";
	cin >> a->height;
	cout << "width: ";
	cin >> a->width;
	cout << "length: ";
	cin >> a->length;
}

void show(const box a)
{
	cout << "Your box:" << endl
		<< "height: " << a.height << " meters" << endl
		<< "width: " << a.width << " meters" << endl
		<< "length: " << a.length << " meters" << endl;
}

void calculate(box* ps)
{
	ps->volume = ps->height * ps->width * ps->length;
}