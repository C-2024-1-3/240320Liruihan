#include <iostream>
using namespace std;
int main() {
    const double PI = 3.141592653589793;
    double r,h;
    cout << "������Բ׶�׵İ뾶: ";
    cin >> r;
    cout << "������Բ׶�ĸ�: ";
    cin >> h;
    double volume = (1.0 / 3.0) * PI * r * r * h;
    cout << "Բ׶�����Ϊ: " << volume << endl;
    return 0;
}
