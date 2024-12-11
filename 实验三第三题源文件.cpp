#include"01.h"
double celsius_to_fah(double cel)
{
	double fah;
	fah = cel * (9.0 / 5.0) + 32;
	return fah;
}
double fahrenheit_to_cels(double fah)
{
	double cel;
	cel = (fah - 32) * (5.0 / 9.0);
	return cel;
}
int main()
{
	double cel;
	cout << "请输入一个摄氏温度：";
	cin >> cel;
	cout << "该摄氏温度对应的华氏温度为：";
	cout << celsius_to_fah(cel) << endl;
	double fah;
	cout << "请输入一个华氏温度：";
	cin >> fah;
	cout << "该华氏温度对应的摄氏温度为：";
	cout << fahrenheit_to_cels(fah);
}