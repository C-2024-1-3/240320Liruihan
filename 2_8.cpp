#include <iostream>
#include <cmath>
#include <complex>
using namespace std;
int main()
{
	double a;
	cout << "请输入a的值:" << endl;
	cin >> a;
	if (a < 0)
	{
		complex<double>x_n(a, 0);
		complex<double>x_np;
		x_np = sqrt(x_n);
		cout << "a的平方根为(复数):" << x_np << endl;
		
	}
	else {
		double x_n = a;
		double x_np = x_n;
		do {
			x_n = x_np;
			x_np = 0.5 * (x_n + a / x_n);
		} while (fabs(x_np - x_n) >= 1e-5);
		cout << "a的平方根为:" << x_np << endl;
	}
	return 0;
}