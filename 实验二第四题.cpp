#include<iostream>
using namespace std;
int main()
{
	double num1, num2;
	char x;
	cout << "�������һ������";
	cin >> num1;
	cout << "������ڶ�������";
	cin >> num2;
	cout << "�����������";
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
			cout << "��������Ϊ��";
		}
		break;
	case '%':
		if (num2 != 0)
		{
			cout << (int)num1 % (int)num2;
		}
		else
		{
			cout << "��������Ϊ��";
		}
		break;
	default:
		cout << "�Ƿ������";
	}
}
