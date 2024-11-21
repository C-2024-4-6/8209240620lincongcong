#include<iostream>
int main()
{
	int applenumber = 2, day = 0, sumnumber = 0;
	while (applenumber <= 100)
	{
		sumnumber += applenumber;
		day++;
		applenumber *= 2;
	}
	float price = sumnumber * 0.8;
	float avgprice = price / day;
	std::cout << avgprice;
}