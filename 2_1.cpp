#include <iostream>
using namespace std;

void zimuchuliChar(char ch) {
    if (ch >= 'a' && ch <= 'z') {  
        cout << "结果: " << char(toupper(ch)) << endl;  
    }
    else {
        cout << "结果: " << int(ch + 1) << endl;  
    }
}

int main() {
    char ch;
    cout << "请输入一个字符: ";
    cin >> ch;
    zimuchiliChar(ch);
    return 0;
}
