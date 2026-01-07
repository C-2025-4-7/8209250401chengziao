#include<iostream>
using namespace std;
class Student
{
private:
	int id;
	int score;
public:
	Student(int n = 0, int s = 0)
	{
		id = n;
		score = s;
	}
	int getId() { return id; }
	int getScore() { return score; }
};
void max(Student* arr)
{
	int maxscore = arr->getScore();
	int maxid = arr->getId();
	for (int i = 1; i < 5; i++)
	{
		if ((arr + i)->getScore() > maxscore)
		{
			maxscore = (arr + i)->getScore();
			maxid = (arr + i)->getId();
		}
	}
	cout << "the max score is:" << maxscore <<"\n"
		 << "the max score id is:" << maxid << endl;
}
int main()
{
	Student arr[5] = {
		Student(1,34),
		Student(2,23),
		Student(3,98),
		Student(4,87),
		Student(5,69)
	};
	max(arr);
	return 0;
}