#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double huashidu,sheshidu;
	cout << "�����뻪�϶ȣ�" << endl;
	cin >> huashidu;
	sheshidu = (huashidu - 32) / 1.8;
	cout << "ת�������϶�Ϊ" <<fixed<< setprecision(2) << sheshidu << endl;

}