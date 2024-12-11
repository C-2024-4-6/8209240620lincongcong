#include<iostream>
using namespace std;
int main()
{
	bool arr[100];
	for (int i = 0; i < 100; i++)
	{
		arr[i] = true;
	}
	int m = 1;
	for (int i = 0; i < 99; i++)
	{
		for (int j = m; j <= 100; j += m + 1)
		{
			arr[j] = !arr[j];
		}
		m++;
	}
	for (int i = 0; i < 100; i++)
	{
		if (arr[i] == true)
		{
			cout << i + 1 << " ";
		}
	}
}