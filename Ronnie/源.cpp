#include<iostream>
using namespace std;
const int Max = 10;
double average(int*,int count);
int input(int*,int count);
void output(int*, int count);
int main()
{
	int size;
	double aver;
	int grade[Max];
	cout << "Enter no more than 10 integers of your grades and I will "
		<< "print them followed by the average." << endl;
	size = input(grade, Max);
	output(grade, size);
	aver = average(grade, size)/size;
	cout << "The average of your grade is: " << aver;
}
int input(int* arr, int limit)
{
	int i;
	for ( i = 0; i < limit; i++)
	{
		cout << "grade "<<i+1<<" : ";
		cin >> arr[i];
		if (!cin)
		{
			cout << "Bad in put, process terminated.\n";
			break;
		}
	}
	return i;
}

void output(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "grade " << i + 1 << " : " << arr[i] << endl;
	}
	return;
}

double average(int arr[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}