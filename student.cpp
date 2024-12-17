#include <iostream>
#include "student.h"
#include <cstring>
using namespace std;
void Student::set_value(int n,const char* nm,char s)
{
	strncpy_s(name,20,nm,_TRUNCATE);
	name[20] = '\0';
	num = n;
	sex = s;
}
void Student::display()
{
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
}