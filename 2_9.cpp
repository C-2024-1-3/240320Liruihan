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
		cout << "�� " << day << " �칺�� " << apples_today << " ��ƻ�������� "
			<< apples_today * per_apple_price << " Ԫ" << endl;
		day++;
		apples_today *= 2;
	}
	double aver_cost = total_cost / (day - 1);
	cout << "ÿ��ƽ������Ϊ:" << aver_cost <<"Ԫ"<< endl;
	return 0;
}