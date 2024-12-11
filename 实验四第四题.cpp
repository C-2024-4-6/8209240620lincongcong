#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int i = 0, j = 0, k = 0;
	while (i < size1 && j < size2)
	{
		if (list1[i] <= list2[j])
		{
			list3[k++] = list1[i++];
		}
		else
		{
			list3[k++] = list2[j++];
		}
	}
	while (i < size1)
	{
		list3[k++] = list1[i++];
	}
	while (j < size2)
	{
		list3[k++] = list2[j++];
	}
}
int main()
{
	int m, n;
	cout << "Enter list1£º";
	cin >> m;
	int* arr1 = new int[m];
	for (int i = 0; i < m; i++)
	{
		cin >> arr1[i];
	}
	cout << "Enter list2£º";
	cin >> n;
	int* arr2 = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr2[i];
	}
	int* arr3 = new int[m + n];
	merge(arr1, m, arr2, n, arr3);
	cout << "The merged list is:";
	for (int i = 0; i < m + n; i++)
	{
		cout << arr3[i] << " ";
	}
}