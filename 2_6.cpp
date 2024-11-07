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
    cout << "请输入两个正整数a和b:" << endl;
    cin >> a >> b;
    if (a <= 0 || b <= 0) {
        cout << "请输入正整数！！" << endl;
        return 1;
    }
    int gongyueshu = biggest(a, b);
    int gongbeishu = least(a, b);
    cout << "最大公约数为：" << gongyueshu << endl;
    cout << "最大公倍数为：" << gongbeishu << endl;
    return 0;
}