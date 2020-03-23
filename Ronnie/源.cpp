#include<iostream>
using namespace std;
const int Slen = 30;
struct student {
	char fullname[Slen];
	char hobby[Slen];
	int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student* ps);
void display3(const student pa[], int n);

int main()
{
	int group_size;
	cout << "Enter class size: ";
	cin >> group_size;
	while (cin.get() != '\n')
		continue;

	student* ptr_stu = new student[group_size];
	int entered = getinfo(ptr_stu, group_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete[]ptr_stu;
	cout << "Done\n";
	return 0;
}

int getinfo(student*stu, int max)
{
	cout << "Now enter each students' information:(enter blank into name to quit)" << endl;
	int i;
	for (i = 0; i < max; i++)
	{
		cout << "student #" << i + 1 << ":"
			<< "fullname: ";
		cin.getline(stu[i].fullname,Slen);
		cout << "hobby: ";
		cin.getline(stu[i].hobby, Slen);
		cout << "ooplevel: ";
		cin >> stu[i].ooplevel;
		cin.get();
	}
	return i+1;
}

void display1(student st)
{
	cout << "fullname: " << st.fullname << '\t'
		<< "hobby: " << st.hobby << '\t'
		<< "ooplevel: " << st.ooplevel << endl;
	return;
}

void display2(const student* ps)
{
	cout << "fullname: " << ps->fullname << '\t'
		<< "hobby: " << ps->hobby << '\t'
		<< "ooplevel: " << ps->ooplevel << endl;
	return;
}

void display3(const student pa[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "student #" << i + 1 << ":\n"
			<< "fullname: " << pa[i].fullname
			<< "\thobby:	" << pa[i].hobby
			<< "\tooplevel: " << pa[i].ooplevel << endl;
	}
	return;
}