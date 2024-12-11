#include<iostream>
using namespace std;
int func(int day)
{
	if (day == 10)
	{
		return 1;
	}
	else
	{
		return 2 * (func(day + 1) + 1);
	}
}
int main()
{
	int day = 1;
	int x = func(day);
	cout << "猴子第一天摘的桃子数量为：" << x << endl;
}