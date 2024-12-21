#include<iostream>
using namespace std;
class Point
{
private:
	int x = 60;
	int y = 80;
public:
	void setPoint(int i, int j)
	{
		x = x + i;
		y = y + j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")";
	}
};
int main()
{
	int i, j;
	cin >> i >> j;
	Point point;
	point.setPoint(i, j);
	point.display();
}