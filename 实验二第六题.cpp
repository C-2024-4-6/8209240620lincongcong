#include<iostream>
using namespace std;
int main()
{
	int a, b;
	int n = 0;
	cout << "������a" << endl;
	cin >> a;
	cout << "������b" << endl;
	cin >> b;
	int max = (a > b) ? a : b;
	for (int i = 1; i < max+1; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			n = i;
		}
	}
	cout << "a��b�����Լ��Ϊ��" << n << endl;
	a = a / n;
	b = b / n;
	int x = a * b * n;
	cout << "a��b����С��Լ��Ϊ��" << x << endl;
}