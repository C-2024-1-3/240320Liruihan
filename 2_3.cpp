#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "�����������ε�������(a,b,c):" << endl;
	cout << "���ÿո��������" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a) {
		double C = a + b + c;
		cout << "�������ε��ܳ�Ϊ:" << C << endl;
		if (a == b || b == c || a == c) {
			cout << "��������Ϊ����������" << endl;
		}
		else {
			cout << "�������β��ǵ���������" << endl;
		}
	}
	else {
		cout << "�������ֵ�޷�����������" << endl;
	}
	return 0;
}