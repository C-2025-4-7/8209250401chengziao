#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a;
	cin >> a;
	double x0=0.0, x1;
	if (a >= 0) {
		x1 = a;
		while (fabs(x1 - x0) >= 1e-323) {
			x0 = x1;
			x1 = (x0 + a / x0) / 2;
		}
		cout << x1 << endl;
	}
	else if (a < 0) {
		x1 = -a;
		while (fabs(x1 - x0) >= 1e-323) {
			x0 = x1;
			x1 = (x0 - a / x0) / 2;
		}
		cout << x1 << "i" << endl;
	}
	return 0;
}
