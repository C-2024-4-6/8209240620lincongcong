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
	cout << "���ӵ�һ��ժ����������Ϊ��" << x << endl;
}