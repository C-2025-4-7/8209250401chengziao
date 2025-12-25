#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
void count(const char s[], int counts[])
{
	int len = strlen(s);
	for (int i = 0; i < len; i++)
	{
		char ch;
		ch = tolower(s[i]);
		if (ch >= 'a'&&ch<='z')
		{
			int i = ch - 'a';
			counts[i]++;
		}
	}
}
int main()
{
	cout << "Enter a string:";
	const int max = 1000;
	char s[max];
	cin.getline(s, max);
	int counts[26] = { 0 };
	count(s, counts);
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] != 0)
		{
			cout << char(97 + i) << ":" << counts[i] << " times" << endl;
		}
	}
	return 0;
}