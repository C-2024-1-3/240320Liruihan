#include <iostream>
using namespace std;
class Student
{
private:
	int id;
	double score;
public:
	void setinfo(int stuid, double stuscore)
	{
		id = stuid;
		score = stuscore;
	}
	int get_id()
	{
		return id;
	}
	double get_score()
	{
		return score;
	}
};
void max(Student* students, int count)
{
	Student* maxstudent = students;
	for (int i = 0; i < count; ++i)
	{
		if ((students + i)->get_score() > maxstudent->get_score())
		{
			maxstudent = students + i;
		}
	}
	cout << "成绩最好的学生信息为" << endl;
	cout << "ID:" << maxstudent->get_id() <<"\t" << "SCORE:" << maxstudent->get_score();
}
int main()
{
	const int studentcount = 5;
	Student students[studentcount];
	for (int i = 0; i < studentcount; ++i)
	{
		int id;
		double score;
		cout << "请输入第" << i + 1 << "个学生的id和score:";
		cin >> id >> score;
		students[i].setinfo(id, score);
	}
	max(students, studentcount);
	return 0;
}