#include <iostream>
using namespace std;
int main()
{
	const double per_apple_price = 0.8;
	double total_cost = 0.0;
	int total_apples_nums = 0;
	int day = 1;
	int apples_today = 2;

	while (total_apples_nums + apples_today <= 100) {
		total_apples_nums += apples_today;
		total_cost += per_apple_price * apples_today;
		cout << "第 " << day << " 天购买 " << apples_today << " 个苹果，花费 "
			<< apples_today * per_apple_price << " 元" << endl;
		day++;
		apples_today *= 2;
	}
	double aver_cost = total_cost / (day - 1);
	cout << "每天平均花费为:" << aver_cost <<"元"<< endl;
	return 0;
}