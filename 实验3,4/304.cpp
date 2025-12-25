#include<iostream>
using namespace std;
int x = 1;
int num(int n)
{
	x = (x + 1) * 2;
	if (n > 1)
	{
		n--;
		return num(n);
	}
}
int main()
{
	cout << "第一天猴子摘桃数量为:";
	cout << num(9) << endl;
	return 0;
}