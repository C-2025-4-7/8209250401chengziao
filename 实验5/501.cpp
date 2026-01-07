#include<iostream>
using namespace std;
class Time
{
private:
	int hour;
	int minute;
	int sec;
public:
	void ioput()
	{
		cin >> hour;
		cin >> minute;
		cin >> sec;
		cout << hour << ":" << minute << ":" << sec << endl;
	}

};
int main()
{
	Time tl;
	tl.ioput();
	return 0;
}