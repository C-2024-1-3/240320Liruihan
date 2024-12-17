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
		cout << "请输入第" << i + 1 << "个长方体的数据" << endl;
		changfangti[i].input();
	}
	for (int i = 0; i < 3; ++i)
	{
		double v = changfangti[i].calculate();
		cout << "第" << i + 1 << "个长方体的体积为:" << v << endl;
	}
	return 0;
}