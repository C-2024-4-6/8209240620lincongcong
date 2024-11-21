#include<iostream>
using namespace std;
int main()
{
	double num1, num2;
	char x;
	cout << "请输入第一个数字";
	cin >> num1;
	cout << "请输入第二个数字";
	cin >> num2;
	cout << "请输入运算符";
	cin >> x;
	switch (x)
	{
	case '+':
		cout << num1 + num2;
		break;
	case '-':
		cout << num1 - num2;
		break;
	case '*':
		cout << num1 * num2;
		break;
	case '/':
		if (num2 != 0)
		{
			cout << num1 / num2;
		}
		else
		{
			cout << "除数不能为零";
		}
		break;
	case '%':
		if (num2 != 0)
		{
			cout << (int)num1 % (int)num2;
		}
		else
		{
			cout << "除数不能为零";
		}
		break;
	default:
		cout << "非法运算符";
	}
}
