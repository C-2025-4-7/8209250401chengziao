#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
		bool con = false;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				con = true;
				break;
			}
		}
		if (con == false)
		{
			cout << arr[i] << " ";
		}
	}
	return 0;
}