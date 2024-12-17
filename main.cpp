#include <iostream>
#include "student.h"
using namespace std;
int main()
{
	Student stu1;
	Student stu2;
	stu1.set_value(1,"Lihua",'M');
	stu2.set_value(2, "Hanhong", 'F');
	cout << "Student 1 information" << endl;
	stu1.display();
	cout << "Student 2 information" << endl;
	stu2.display();
}