#include<iostream>
using namespace std;
double* fill_array(double*, int);
void show_array(const double* begin, const double* end);
void revalue_array(double*, double*,double);
const int Max = 5;

int main()
{
	double properties[Max];
	double* end = fill_array(properties, Max);
	show_array(properties, end);
	if (properties < end)
	{
		cout << "Enter revaluation factor: ";
		double factor;
		while (!(cin >> factor))
		{
			cin.clear();
			while (cin.get()!= '\n')
				continue;
			cout << "Bad input ; Please enter a number: ";
		}
		revalue_array(properties, end, factor);
		show_array(properties, end);
	}
	cout << "Done\n";
	return 0;
}

double* fill_array(double* arr, int m)
{
	double temp;
	int i;
	for (i = 0; i < Max; i++)
	{
		cout<<"Enter value #"<<i+1<<": ";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input;input terminated.\n";
			break;
		}
		else if (temp < 0)
			break;
		arr[i] = temp;
	}
	return arr+i;
}

void show_array(const double* begin, const double* end)
{
	for (int i = 0; begin + i <= end; i++)
	{
		cout << "Properties #" << i + 1 << ": $"
			<< begin[i] << endl;
	}
}

void revalue_array(double* arr, double* end,double n)
{
	for (int i = 0; arr + i <= end; i++)
		arr[i] *= n;
}