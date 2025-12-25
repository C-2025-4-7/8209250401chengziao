#include<iostream>
using namespace std;
int max_num(int x, int y)
{
	for (int n = (x > y ? x : y); n > 0; n--)
	{
		if (x % n == 0 && y % n == 0)
		{
			return n;
		}
	}
}
int min_num(int x, int y)
{
	for (int n = 1; n <= x * y; n++)
	{
		if (n % x == 0 && n % y == 0)
		{
			return n;
		}
	}
}
int main()
{
	int m, n;
	cout << "请输入两个自然数m和n:";
	cin >> m >> n;
	cout << "m和n的最大公约数为" << max_num(m, n) << endl;
	cout << "m和n的最小公倍数为" << min_num(m, n);
	return 0;
}