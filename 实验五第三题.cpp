#include<iostream>
using namespace std;
class RectangularColumns
{
private:
	int length;
	int width;
	int height;
public:
	void set_value(int l, int w, int h)
	{
		length = l;
		width = w;
		height = h;
	}
	int func()
	{
		return length * width * height;
	}
};
int main()
{
	RectangularColumns r1;
	RectangularColumns r2;
	RectangularColumns r3;
	int r1_l, r1_w, r1_h, r2_l, r2_w, r2_h, r3_l, r3_w, r3_h;
	cout << "请输入第一个长方体的长，宽，高:";
	cin >> r1_l >> r1_w >> r1_h;
	r1.set_value(r1_l, r1_w, r1_h);
	cout << r1.func() << endl;
	cout << "请输入第二个长方体的长，宽，高:";
	cin >> r2_l >> r2_w >> r2_h;
	r2.set_value(r2_l, r2_w, r2_h);
	cout << r2.func() << endl;
	cout << "请输入第三个长方体的长，宽，高:";
	cin >> r3_l >> r3_w >> r3_h;
	r3.set_value(r3_l, r3_w, r3_h);
	cout << r3.func();
}