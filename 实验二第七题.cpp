#include<iostream>
using namespace std;
int main()
{
	int x = 1;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < x; j++)
		{
			cout << "*";
		}
		x++;
		cout << endl;
	}
}