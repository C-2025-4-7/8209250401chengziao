#include<iostream>
using namespace std;
int main6() {
	int a, b;
	cin >> a >> b;
	for (int x = (a > b ? a : b);x>=1; x--){
		if (a % x == 0 && b % x == 0){
			cout <<"a与b的最大公约数为" << x << endl;
			break;
		}
	}
	for (int y = (a < b ? a : b); y <= a * b; y++){
		if (y % a == 0 && y % b == 0) {
			cout << "a与b的最小公倍数为" << y << endl;
			break;
		}
	}
	return 0;
}