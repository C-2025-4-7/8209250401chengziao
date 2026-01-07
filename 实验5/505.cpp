#include<iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point(int x = 60, int y = 80)
	{
		this->x = x;
		this->y = y;
	}
	void setPoint(int i,int j)
	{
		x = x + i;
		y = y + j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	int i = 10, j = 10;
	Point p1;
	p1.setPoint(i, j);
	p1.display();
	return 0;
}