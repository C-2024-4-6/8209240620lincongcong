#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	bool x = true;
	int diff = 0, num;
	for (int i = 0; i < 10; i++)
	{
		cin >> num;
		for (int j = 0; j < diff; j++)
		{
			if (num == arr[j])
			{
				x = false;
				break;
			}
		}
		if (x)
		{
			arr[diff] = num;
			diff++;
		}
		x = true;
	}
	for (int i = 0; i < diff; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}