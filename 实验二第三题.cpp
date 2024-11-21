#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "请输入三角形的三条边的长度:";
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		if (a == b || a == c || b == c)
		{
			cout << "这是一个等腰三角形" << endl;
			cout << a + b + c;
		}
		else
		{
			cout << a + b + c;
		}
	}
	else
	{
		cout << "这不是一个三角形";
	}
}
