#include<iostream>
using namespace std;
void func(double* arr, int len)
{
	double temp;
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main()
{
	double arr[10];
	int len = sizeof(arr) / sizeof(arr[0]);
	cout << "�����������ʮ�����֣�" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	func(arr, len);
	cout << "���������������ʮ�����֣�" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}