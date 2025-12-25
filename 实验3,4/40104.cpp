#include<iostream>
#include<vector>
using namespace std;
void merge(const int list1[],int size1,const int list2[], int size2, int list3[])
{
	int i = 0;
	int j = 0;
	int k = 0;
	while (i < size1 && j < size2)
	{
		if (list1[i] < list2[j])
		{
			list3[k] = list1[i];
			i++;
		}
		else
		{
			list3[k] = list2[j];
			j++;
		}
		k++;
	}
	while (j < size2)
	{
		list3[k] = list2[j];
		j++;
		k++;
	}
	while (i < size1)
	{
		list3[k] = list1[i];
		i++;
		k++;
	}
}
int main()
{
	cout << "Enter list1:";
	int x;
	cin >> x;
	if (x < 0)x = 0;
	vector<int> arr1(x);
	for (int i = 0; i < x; i++)
	{
		cin >> arr1[i];
	}
	cout << endl;
	cout << "Enter list2:";
	int y;
	cin >> y;
	vector<int> arr2(y);
	for (int j = 0; j < y; j++)
	{
		cin >> arr2[j];
	}
	cout << endl;
	vector<int>arr3(x + y);
	if (x + y > 0)
	{
		merge(arr1.data(), x, arr2.data(), y, arr3.data());
	}
	cout << "The merge list is:";
	for (int i = 0; i < x + y; i++)
	{
		cout << arr3[i] << " ";
	}
	cout << endl;
	return 0;
}