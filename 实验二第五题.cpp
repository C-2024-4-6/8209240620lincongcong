#include<iostream>
using namespace std;
int main()
{
    char c;//�����ַ��ͱ���
    int eng = 0, space = 0, num = 0, other = 0;//��������ʼ��Ϊ0
    cout << "������һ���ַ���" << endl;
    while (cin.get(c))//ʹ��cin.get()���������ȡ�ַ�
    {
        if (c == '\n')//��������س����з������˳�ѭ��
            break;
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))//�ж��Ƿ�ΪӢ����ĸ
            eng++;
        else if (c == ' ')//�ж��Ƿ�Ϊ�ո�
            space++;
        else if (c >= '0' && c <= '9')//�ж��Ƿ�Ϊ�����ַ�
            num++;
        else//����Ϊ�����ַ�
            other++;
    }
    cout << "����Ӣ����ĸ��" << eng << "�����ո���" << space << "���������ַ���" << num << "���������ַ���" << other << "����" << endl;
    return 0;
}