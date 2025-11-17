#include<iostream>
using namespace std;
int main() {
	double m = 0.8;
	int x = 0;
	int y = 0;
	for (int n = 2; n <= 100; n *= 2) {
		x += n;
		y++;
	}
	double z = m * x / y;
	cout << "每天平均花" << z << "元" << endl;
	return 0;
}