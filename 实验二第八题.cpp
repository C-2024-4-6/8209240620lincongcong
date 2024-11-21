#include<iostream>
using namespace std;
int main()
{
	float a;
	cin >> a;
	float x = a;
	float xnew;
	if (a < 0)
	{
		return false;
	}
	while (1)
	{
		xnew = 1.0 / 2.0 * (x + a / x);
		if (x - xnew < 1e-5)
		{
			break;
		}
		x = xnew;
	}
	cout << xnew;
}
