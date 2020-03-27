#include<iostream>
#include<cstring>
using namespace std;
template<typename T>
T maxn(T* aa, int n);
template <> const char* maxn<const char*>(const char**, int);

int main()
{
	int ii[6] = { 1,2,3,4,5,1 };
	double dd[4] = { 1.2,3.4,5.6,4 };
	cout << "The max of these ints is " << maxn(ii, 6) << endl;
	cout << "The max of these doubles is " << maxn(dd, 4) << endl;
	const char* strs[5] = {
		"Ronnie","Jane","Jack","Triss","Geralt"
	};
	cout << "The longest of these string is: " << maxn(strs, 5) << endl
		<< "Bye!";
	return 0;
}

template<typename T>
T maxn(T* aa, int n)
{
	T max = aa[0];
	for (int i = 0; i < n; i++)
		max = max > aa[i] ? max : aa[i];
	return max;
}

template <>const char* maxn<const char*>(const char** aa, int n)
{
	const char* max = aa[0];
	for (int i = 0; i < n; i++)
		max = strlen(max) >= strlen(aa[i]) ? max : aa[i];
	return max;
}