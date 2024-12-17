#include<iostream>
using namespace std;
class Time             
{
private:
	int hour;
	int minute;
	int sec;
public:
	void settime()
	{
		cout << "enter hour:";
		cin >> hour;
		cout << "enter minute:";
		cin >> minute;
		cout << "enter seconds:";
		cin >> sec;
	}
	void displaytime()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1;
	t1.settime();
	t1.displaytime();
	return 0;
}

