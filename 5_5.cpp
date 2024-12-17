#include <iostream>
using namespace std;
class Point
{
private:
	int x,y;
public:
	Point()
	{
		x = 60, y = 80;
	}
	void setPoint(int i, int j)
	{
		x = x + i;
		y = y + j;
	}
	void display()
	{
		cout << "坐标为:(" << x << "," << y <<")" << endl;
	}
};
int main()
{
	Point p;
	cout << "初始化后的坐标为";
	p.display();
	p.setPoint(30, 10);
	cout << "修改后的坐标为:";
	p.display();
	return 0;
}