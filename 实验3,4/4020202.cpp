#include<iostream>
#include<cmath>
#include<cstring>
#include<cctype>
using namespace std;
int parseHex(const char*const hexString)
{
	int len = strlen(hexString);
	int all = 0;
	for (int i = 0; i < len; i++)
	{
		char ch = hexString[i];
		int num = 0;
		if (ch >= '0' && ch <= '9')
		{
			num = ch - '0';
		}
		if (ch >= 'a' && ch <= 'z')
		{
			num = ch - 'a' + 10;
		}
		if (ch >= 'A' && ch <= 'Z')
		{
			num = ch - 'A' + 10;
		}
		int p = len - 1 - i;
		all += num * pow(16, p);
	}
	return all;
}
int main()
{
	char chs[100];
	cin >> chs;
	int result = parseHex(chs);
	cout << result << endl;
	return 0;
}