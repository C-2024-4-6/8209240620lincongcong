#include <iostream>
#include <iomanip> 
using namespace std;
int main() {
    double f, c;//f�ǻ��ϣ�c������
    cout << "�����뻪���¶ȣ�";
    cin >> f;
    c = 5.0 / 9.0 * (f - 32);
    cout << fixed << setprecision(2);
    cout << "�����¶�Ϊ��" << c << endl;
    return 0;
}