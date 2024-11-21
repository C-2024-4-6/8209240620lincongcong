#include <iostream>
#include <iomanip> 
using namespace std;
int main() {
    double f, c;//f是华氏；c是摄氏
    cout << "请输入华氏温度：";
    cin >> f;
    c = 5.0 / 9.0 * (f - 32);
    cout << fixed << setprecision(2);
    cout << "摄氏温度为：" << c << endl;
    return 0;
}