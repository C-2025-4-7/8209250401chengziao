#include<iostream>
using namespace std;
int main() {
	for (int a = 1; a <= 5; a++) {
		for (int b = 1; b <= 5; b++) {
			if (b == 1) {
				cout << "*";
			}
			else if (b == 2 && a > 1) {
				cout << "*";
			}
			else if (b == 3 && a > 2) {
				cout << "*";
			}
			else if (b == 4 && a > 3) {
				cout << "*";
			}
			else if (b == 5 && a > 4) {
				cout << "*";
			}
		}
		cout << endl;
	}
	return 0;
}
