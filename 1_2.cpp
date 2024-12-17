#include <iostream>
using namespace std;
int main() {
    const double PI = 3.141592653589793;
    double r,h;
    cout << "请输入圆锥底的半径: ";
    cin >> r;
    cout << "请输入圆锥的高: ";
    cin >> h;
    double volume = (1.0 / 3.0) * PI * r * r * h;
    cout << "圆锥的体积为: " << volume << endl;
    return 0;
}
