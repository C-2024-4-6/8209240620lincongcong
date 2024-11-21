#include<iostream>
using namespace std;
int main()
{
	int a, b;
	int n = 0;
	cout << "请输入a" << endl;
	cin >> a;
	cout << "请输入b" << endl;
	cin >> b;
	int max = (a > b) ? a : b;
	for (int i = 1; i < max+1; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			n = i;
		}
	}
	cout << "a和b的最大公约数为：" << n << endl;
	a = a / n;
	b = b / n;
	int x = a * b * n;
	cout << "a和b的最小公约数为：" << x << endl;
}