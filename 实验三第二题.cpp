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
	cout << "请输入数字：";
	cin >> a;
	if (is_prime(a))
	{
		cout << "是素数";
	}
	else
	{
		cout << "不是素数";
	}
}
