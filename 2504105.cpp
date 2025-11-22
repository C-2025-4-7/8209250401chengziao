#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double h, t;
    cout << "请输入华氏温度: ";
    cin >> h;
    t = (h - 32) * 5.0 / 9.0;
    cout << fixed << setprecision(2);
    cout << "摄氏温度为: " << t << endl;
    return 0;
}