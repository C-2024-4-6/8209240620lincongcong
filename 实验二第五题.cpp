#include<iostream>
using namespace std;
int main()
{
    char c;//定义字符型变量
    int eng = 0, space = 0, num = 0, other = 0;//计数器初始化为0
    cout << "请输入一行字符：" << endl;
    while (cin.get(c))//使用cin.get()函数逐个读取字符
    {
        if (c == '\n')//如果读到回车换行符，则退出循环
            break;
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))//判断是否为英文字母
            eng++;
        else if (c == ' ')//判断是否为空格
            space++;
        else if (c >= '0' && c <= '9')//判断是否为数字字符
            num++;
        else//否则为其他字符
            other++;
    }
    cout << "其中英文字母有" << eng << "个，空格有" << space << "个，数字字符有" << num << "个，其他字符有" << other << "个。" << endl;
    return 0;
}