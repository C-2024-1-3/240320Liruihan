#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "请输入三角形的三条边(a,b,c):" << endl;
	cout << "请用空格隔开数字" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a) {
		double C = a + b + c;
		cout << "该三角形的周长为:" << C << endl;
		if (a == b || b == c || a == c) {
			cout << "该三角形为等腰三角形" << endl;
		}
		else {
			cout << "该三角形不是等腰三角形" << endl;
		}
	}
	else {
		cout << "您输入的值无法构成三角形" << endl;
	}
	return 0;
}