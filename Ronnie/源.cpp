#include<iostream>
using namespace std;
const int Len = 5;
void fillarr(int*, int);
void BubbleSort(int*, int);
void showarr(const int*, int);
int sort(const int*, int head, int tail, int);

int main()
{
	int aa[Len];
	int bb, cc;
	fillarr(aa, Len);
	BubbleSort(aa, Len);
	showarr(aa, Len);
	cout << "Enter a number and I wil find if there is a same number in your array:";
	cin >> bb;
	cc = sort(aa, 0, Len-1, bb);
	if (cc!=-1)
		cout << "number #" << cc+1 << ": " << aa[cc];
	else cout << "There is no such integer in your array.";
	return 0;
}

void fillarr(int*arr, int)
{
	cout << "Enter " << Len << " integers:\n";
	for (int i = 0; i < Len; i++)
	{
		cout << "#" << i + 1 << ": ";
		cin >> arr[i];
	}
	return;
}

void BubbleSort(int* arr, int n)
{
	bool ok = 0;
	while (!ok)
	{
		ok = 1;
		for (int i = 0; i < n-1; i++)
		{
			int temp = arr[i];
			if (arr[i] < arr[i + 1])
			{
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				ok = 0;
			}
			
		}
	}
	return;
}

void showarr(const int* arr, int n)
{
	cout << "This is your int array:\n";
	for (int i = 0; i < n; i++)
	{
		cout << "#" << i + 1 << ": " << arr[i] << '\t';
		if (!((i + 1) % 5))
			cout << endl;
	}
	cout << endl;
	return;
}

int sort(const int* arr, int head,int tail,int n)
{
	int same;
	int middle = (head + tail) / 2;
	if (tail - head == 1)
	{
		if (n == arr[head])
			same = head;
		else if (n == arr[tail])
			same = tail;
		else same = -1;
		return same;
	}
	else if (n <= arr[head] && n >= arr[tail])
	{
		if (n > arr[middle])
			same = sort(arr, head, middle, n);
		else same = sort(arr, middle, tail, n);
	}
	else same = -1;
	return same;
}
