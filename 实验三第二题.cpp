#include<iostream>
using namespace std;
bool is_prime(int num)
{
	if (num == 2)
	{
		return true;
	}
	else if (num % 2 == 0)
	{
		return false;
	}
	else for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int a;
	cout << "���������֣�";
	cin >> a;
	if (is_prime(a))
	{
		cout << "������";
	}
	else
	{
		cout << "��������";
	}
}
