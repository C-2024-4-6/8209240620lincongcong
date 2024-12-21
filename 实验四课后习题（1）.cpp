#include <iostream>
using namespace std;

int indexof(const char* s1, const char* s2)
{
    if (*s1 == '\0' || *s2 == '\0')
    {
        return -1;
    }
    for (int i = 0; s2[i] != '\0'; i++)
    {
        int j = 0;
        while (s1[j] != '\0' && s2[i + j] == s1[j])
        {
            j++;
        }
        if (s1[j] == '\0')
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    char s1[100], s2[100];
    cout << "�������ַ���s1: ";
    cin >> s1;
    cout << "�������ַ���s2: ";
    cin >> s2;
    int result = indexof(s1, s2);

    if (result != -1)
    {
        cout << "�ַ���s1��s2�еĵ�һ��ƥ��λ��Ϊ: " << result << endl;
    }
    else
    {
        cout << "�ַ���s1�����ַ���s2���Ӵ�" << endl;
    }

    return 0;
}
