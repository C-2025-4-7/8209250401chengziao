#include<iostream>
using namespace std;
int main3()
{
	int x, y, z;
	cin >> x >> y >> z;
	if ((x + y > z) && (x + z > y) && (y + z > x))
	{
		cout << x + y + z << endl;
		if ((x == y) || (y == z) || (x == z))
		{
			cout << "此三角形为等腰三角形" << endl;
		}
		else 
		{
			cout << "此三角形不是等腰三角形" << endl;
		}
	}
	else
	{
		cout << "不能构成三角形" << endl;
	}
	return 0;
}