#include <iostream>
using namespace std;

int biggest(int a, int b) {
    while (b != 0) {
        int mid = a % b;
        a = b;
        b = mid;
    }
    return a;
}
int least(int a, int b) {
    return(a * b) / biggest(a, b);

}
int main()
{
    int a, b;
    cout << "����������������a��b:" << endl;
    cin >> a >> b;
    if (a <= 0 || b <= 0) {
        cout << "����������������" << endl;
        return 1;
    }
    int gongyueshu = biggest(a, b);
    int gongbeishu = least(a, b);
    cout << "���Լ��Ϊ��" << gongyueshu << endl;
    cout << "��󹫱���Ϊ��" << gongbeishu << endl;
    return 0;
}