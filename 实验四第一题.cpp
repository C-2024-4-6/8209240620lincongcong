#include<iostream>
using namespace std;
int main()
{
	int arr1[10], arr2[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> arr1[i];
	}
	int diff = 0, m = 0;
	for (int i = 0; i < 10; i++)
	{
		bool x = true;
		for (int j = 0; j < diff; j++)
		{
			if (arr2[j] == arr1[i])
			{
				x = false;
				break;
			}
		}
		if (x)
		{
			arr2[m] = arr1[i];
			diff++, m++;
		}
	}
	for (int i = 0; i < diff; i++)
	{
		cout << arr2[i] << " ";
	}
}