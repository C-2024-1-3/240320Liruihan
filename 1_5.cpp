#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double huashidu,sheshidu;
	cout << "请输入华氏度：" << endl;
	cin >> huashidu;
	sheshidu = (huashidu - 32) / 1.8;
	cout << "转换后摄氏度为" <<fixed<< setprecision(2) << sheshidu << endl;

}