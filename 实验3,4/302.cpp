#include<iostream>
using namespace std;
bool is_prime(int num)
{
	for (int n = num-1; n>1; n--)
	{
		if (num % n == 0)
		{
			return false;
			break;
		}
	}
	return true;
}
int main()
{
	int m = 1;
	for (int n = 2;; n++)
	{
		if (is_prime(n) == 1)
		{
			cout << n << "\t";
			if  (m % 10 == 0)
			{
				cout << endl;
			}
			m++;
			if (m == 201)
				break;
		}
	}
	return 0;
}