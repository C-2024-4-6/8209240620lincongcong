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
	x(a, b, gcd, lcm);
	cout << "��С�������ǣ�" << gcd << endl;
	cout << "��������ǣ�" << lcm << endl;
}