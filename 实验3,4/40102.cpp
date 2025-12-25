#include<iostream>
using namespace std;
void sort(double list[], int listSize)
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < listSize - 1; j++)
		{
			if (list[j] > list[j + 1])
			{
				double temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
				changed = true;
			}
		}
	} while (changed);
}
int main()
{
	double nums[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> nums[i];
	}
	sort(nums, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << nums[i] << " ";
	}
	cout << endl;
	return 0;
}