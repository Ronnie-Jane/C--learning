#include<iostream>
using namespace std;
double add(double, double);
double minuss(double, double);
double pluss(double, double);
double devide(double, double);
double cal(double, double, double(*operation)(double, double));

int main()
{
	const char operation[4] = { '+','-','x','/' };
	double(* pf[4])(double, double) = { add,minuss,pluss,devide };
	double a, b, c;
	int choice;
	cout << "Enter two double numbers and choose one operation:(enter char into a to quit)" << endl;
	while (1)
	{
		cout << "a: ";
		cin >> a;
		if (!cin)
			break;
		cout << "b: ";
		cin >> b;
		cout << "Then choose a operation:" << endl
			<< "#1: add\t#2: minus\t#3: plus\t#4: devide" << endl;
		cin >> choice;
		c = cal(a, b, pf[choice-1]);
		cout << "a " << operation[choice - 1] << " b = " << c<<endl<<endl;
	}
	cout << "Bye!\t";
	return 0;
}

double add(double a, double b)
{
	return a + b;
}

double minuss(double a, double b)
{
	return a - b;
}

double pluss(double a, double b)
{
	return a * b;
}

double devide(double a, double b)
{
	return a / b;
}

double cal(double a, double b, double(*operation)(double, double))
{
	return (*operation)(a, b);
}