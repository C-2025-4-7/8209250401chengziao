#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double h, t;
    cout << "�����뻪���¶�: ";
    cin >> h;
    t = (h - 32) * 5.0 / 9.0;
    cout << fixed << setprecision(2);
    cout << "�����¶�Ϊ: " << t << endl;
    return 0;
}
