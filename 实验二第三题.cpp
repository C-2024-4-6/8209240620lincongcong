#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "�����������ε������ߵĳ���:";
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		if (a == b || a == c || b == c)
		{
			cout << "����һ������������" << endl;
			cout << a + b + c;
		}
		else
		{
			cout << a + b + c;
		}
	}
	else
	{
		cout << "�ⲻ��һ��������";
	}
}
