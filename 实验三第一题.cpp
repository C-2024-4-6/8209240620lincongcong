#include<iostream>
using namespace std;
void x(int a, int b, int& gcd, int& lcm)
{
	int m = a, n = b;
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	gcd = a;
	lcm = (m / gcd) * n;
}
int main()
{
	int a, b, gcd, lcm;
	cin >> a >> b;
	x(a, b, gcd, lcm);//这里可以实现“形参改变实参”
	cout << "最小公倍数是：" << lcm << endl;
	cout << "最大公因数是：" << gcd << endl;
}