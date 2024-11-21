#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	for (int i = 0; i < 4; i++)
	{
		float num;
		cin >> num;
		if (num > 0 && num <= 10)
		{
			if (num < 1)
			{
				cout << (float)3 - 2 * num;
			}
			else if (num >= 1 && num < 5)
			{
				cout << (float)2 / (4 * num) + 1;
			}
			else if (num >= 5 && num < 10)
			{
				cout << (float)num * num;
			}
		}
		else
		{
			cout << "您输入的数字不在定义域内";
		}
	}
}
