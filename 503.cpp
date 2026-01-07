#include<iostream>
using namespace std;
class c
{
private:
	int length;
	int width;
	int height;
public:
	void input()
	{
		cin >> length;
		cin >> width;
		cin >> height;
	}
	void output()
	{
		int v = length * width * height;
		cout << v << endl;
	}
};
int main()
{
	c c1, c2, c3;
	c1.input();
	c2.input();
	c3.input();
	c1.output();
	c2.output();
	c3.output();
	return 0;
}