#include<iostream>
using namespace std;
int fill_array(int[],int Max);
void show_array(const int*, int size);
void reserve_array(int[],int size);
const int Max = 15;
int main()
{
	int value[Max];
	int size = fill_array(value, Max);
	show_array(value, size);
	reserve_array(value, size);
	show_array(value, size);
	return 0;
}

int fill_array(int value[], int Max)
{
	int i;
	cout << "Now enter each values to fill the array:"
		<<"(enter non-numeric to terminate input)" << endl;
	for (i = 0; i < Max; i++)
	{
		cout << "value #" << i + 1 << ": ";
		cin >> value[i];
		if (!cin)
			break;
	}
	return i;
}

void show_array(const int value[], int size)
{
	cout << "The following are your enterings:" << endl;
	for (int i = 0; i < size; i++)
	{
		if (!((i + 1) % 4))
			cout << endl;
		cout << "value #" << i + 1 << ": " << value[i]<<"\t";
	}
	cout << endl;
}

void reserve_array(int value[], int size)
{
	for (int i = 1; i <= size / 2; i++)
	{
		int temp = value[size - i - 1];
		value[size - i - 1] = value[i];
		value[i] = temp;
	}
}