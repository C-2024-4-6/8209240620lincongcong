#include<iostream>
using namespace std;
int main()
{
	int r, h;//r�ǰ뾶��h�Ǹ�
	const double PI = 3.14159;
	cout << "������Բ׶�İ뾶:";
	cin >> r;
	cout << "������Բ׶�ĸ�:";
	cin >> h;
	double volume = 0;
	volume = 1.0 / 3.0 * PI * r * r * h;
	cout << "Բ׶���Ϊ��" << volume;
}
