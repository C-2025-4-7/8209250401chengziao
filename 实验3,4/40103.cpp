#include<iostream>
using namespace std;
void change(bool &n)
{
	n = !n;
}
int main()
{
	bool L[100];
	for (int i = 0; i < 100; i++)
	{
		L[i] = true;
	}
	for (int j = 2; j <= 100; j++)
	{
		for (int i = 1; i <= 100; i++)
		{
			if (i % j == 0)
			{
				change(L[i-1]);
			}
		}
	}
	for (int i = 0; i < 100; i++)
	{
		if (L[i] == true)
		{
			cout << i+1 << " ";
		}
	}
	return 0;
}