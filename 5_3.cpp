#include <iostream>
using namespace std;
class CFT
{
private:
	double height;
	double length;
	double width;
public:
	double calculate()
	{
		return length * height * width;
	}
	void input()
	{
		cout << "enter height:";
		cin >> height;
		cout << "enter width:";
		cin >> width;
		cout << "enter length:";
		cin >> length;
	}
};
int main()
{
	CFT changfangti[3];
	for (int i = 0; i < 3; ++i)
	{
		cout << "�������" << i + 1 << "�������������" << endl;
		changfangti[i].input();
	}
	for (int i = 0; i < 3; ++i)
	{
		double v = changfangti[i].calculate();
		cout << "��" << i + 1 << "������������Ϊ:" << v << endl;
	}
	return 0;
}