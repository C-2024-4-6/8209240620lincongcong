#include<iostream>
using namespace std;
int main()
{
	int r, h;//r是半径，h是高
	const double PI = 3.14159;
	cout << "请输入圆锥的半径:";
	cin >> r;
	cout << "请输入圆锥的高:";
	cin >> h;
	double volume = 0;
	volume = 1.0 / 3.0 * PI * r * r * h;
	cout << "圆锥体积为：" << volume;
}
