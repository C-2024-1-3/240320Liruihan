#include <iostream>
#include <string>
using namespace std;
int main()
{
	string input;
	char ch;
	int zimu=0, spaces=0, nums=0, others=0;
	cout << "������һ���ַ�" << endl;
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
	cout << "��ĸ������" << zimu << endl;
	cout << "�ո������" << spaces << endl;
	cout << "���ָ�����" << nums << endl;
	cout << "�����ַ�������" << others << endl;

	return 0;
}