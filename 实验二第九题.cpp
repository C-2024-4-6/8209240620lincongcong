#include<iostream>
using namespace std;
int main()
{
	int day = 0, sumnumber = 2, firstnumber = 2;
	double oneprice = 0.8;
	while (sumnumber <= 100)
	{
		firstnumber *= 2;
		sumnumber += firstnumber;
		day++;
	}
	cout << "��ƻ����ƽ���۸�Ϊ:" << (sumnumber - firstnumber) * oneprice / day;
}