#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int indexof(const char s1[], const char s2[])
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	for (int i = 0; i < len2; i++)
	{
		if (i + len1 > len2)break;
		bool match = true;
		for (int j = 0; j < len1; j++)
		{
			if (s1[j] != s2[i + j])
			{
				match = false;
			}
		}
		if (match == true)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	const int max = 1000;
	char s1[max];
	char s2[max];
	cout << "Enter the first string:";
	cin.getline(s1, max);
	cout << "Enter the second string:";
	cin.getline(s2, max);
	cout << "indexof(¡°" << s1 << "¡±£¬¡°" << s2 << "¡±£©is " << indexof(s1, s2) << endl;
	return 0;
}