#include <iostream>
using namespace std;

void zimuchuliChar(char ch) {
    if (ch >= 'a' && ch <= 'z') {  
        cout << "���: " << char(toupper(ch)) << endl;  
    }
    else {
        cout << "���: " << int(ch + 1) << endl;  
    }
}

int main() {
    char ch;
    cout << "������һ���ַ�: ";
    cin >> ch;
    zimuchiliChar(ch);
    return 0;
}
