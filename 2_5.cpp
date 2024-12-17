#include <iostream>
#include <string>
using namespace std;
int main()
{
	string input;
	char ch;
	int zimu=0, spaces=0, nums=0, others=0;
	cout << "请输入一行字符" << endl;
	while (cin.get(ch)) {
		if (ch == '\n') {
			input += ch;  
			break;  
		}
		input += ch;  
	}
	for (char a : input) {
		if (isalpha(a)) {
			zimu++;
		}
		else if(isspace(a)) {
			spaces++;
		}
		else if (isdigit(a)) {
			nums++;
		}
		else {
			others++;
		}
	}
	cout << "字母个数：" << zimu << endl;
	cout << "空格个数：" << spaces << endl;
	cout << "数字个数：" << nums << endl;
	cout << "其他字符个数：" << others << endl;

	return 0;
}