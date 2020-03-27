#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;
struct stringy {
	char* str;
	int ct;
};

void set(stringy&,const char*);
void show(const stringy&, int n = 1);
void show(const char*, int n = 1);

int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used tobe.";
	set(beany, testing);
	show(beany);
	cout << endl;
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	cout << endl;
	show(testing, 3);
	show("Done!");
	return 0;
}

void set(stringy& aa,const char* arr)
{
	aa.ct = strlen(arr);
	aa.str = new char[aa.ct + 1];
	strcpy(aa.str, arr);
	return;
}

void show(const stringy& aa, int n)
{
	for (int i = 0; i < n; i++)
		cout << aa.str << endl;
	return;
}

void show(const char* arr, int n)
{
	for (int i = 0; i < n; i++)
		cout << arr << endl;
	return;
}
