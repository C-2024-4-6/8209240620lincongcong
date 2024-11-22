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
	cout << "买苹果的平均价格为:" << (sumnumber - firstnumber) * oneprice / day;
}