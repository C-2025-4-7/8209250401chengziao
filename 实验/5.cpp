#include<iostream>
#include<string>
using namespace std;
int main5() {
	string str;
	int l = 0, n = 0, s = 0, o = 0;
	getline(cin, str);
	for (char ch : str) {
		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
			l++;
		}
		else if (ch >= '0' && ch <= '9') {
			n++;
		}
		else if (ch == ' ') {
			s++;
		}
		else {
			o++;
		}
	}
	cout << "英文字母的数量为" << l << "个" << endl;
	cout << "数字字符的数量为" << n << "个" << endl;
	cout << "空格的数量为" << s << "个" << endl;
	cout << "其他字符的数量为" << o << "个" << endl;
	return 0;
}