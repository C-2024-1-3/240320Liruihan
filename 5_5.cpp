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
		cout << "����Ϊ:(" << x << "," << y <<")" << endl;
	}
};
int main()
{
	Point p;
	cout << "��ʼ���������Ϊ";
	p.display();
	p.setPoint(30, 10);
	cout << "�޸ĺ������Ϊ:";
	p.display();
	return 0;
}