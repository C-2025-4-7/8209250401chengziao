#include<iostream>
using namespace std;
void sort(int list[], int size);
int main13()
{
	int n;
	cout << "please input the counts of array:";
	cin >> n;
	cout << endl;
	cout << "please input the array:";
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, n);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	delete[] arr;
	return 0;
}
void sort(int list[], int listSize)
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < listSize - 1; j++)
		{
			if (list[j] > list[j + 1])
			{
				int temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
				changed = true;
			}
		}
	} while (changed);
}