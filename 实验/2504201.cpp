#include<iostream>
using namespace std;
int main()
{
	char ch;
	cin >> ch;
	int num1 = (int)ch;
	if (num1 >= 97)
	{
		int num2 = num1 - 32;
		cout << (char)num2 << endl;
	}
	else
	{
		cout << num1 + 1 << endl;
	}
	return 0;
}
