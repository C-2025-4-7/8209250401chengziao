#include<iostream>
using namespace std;
int main(){
	int x, y;
	char ch;
	cin >> x >> ch >> y;
	if (ch == '+'){
		cout << x + y << endl;
	}
	else if (ch == '-') {
		cout << x - y << endl;
	}
	else if (ch == '*') {
		cout << x * y << endl;
	}
	else if (ch == '/') {
		if (y != 0) {
			cout << x / y << endl;
		}
		else {
			cout << "除数不可以为0" << endl;
		}
	}
	else if (ch == '%') {
		if (y != 0) {
			cout << x % y << endl;
		}
		else {
			cout << "取模时除数不可以为0" << endl;
		}
	}
	else {
		cout << "运算符非法" << endl;
	}
	return 0;
}
