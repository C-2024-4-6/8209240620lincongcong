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
	cout << "������һ�������¶ȣ�";
	cin >> cel;
	cout << "�������¶ȶ�Ӧ�Ļ����¶�Ϊ��";
	cout << celsius_to_fah(cel) << endl;
	double fah;
	cout << "������һ�������¶ȣ�";
	cin >> fah;
	cout << "�û����¶ȶ�Ӧ�������¶�Ϊ��";
	cout << fahrenheit_to_cels(fah);
}