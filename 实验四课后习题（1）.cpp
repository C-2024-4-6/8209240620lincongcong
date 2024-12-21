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
    cout << "ÇëÊäÈë×Ö·û´®s1: ";
    cin >> s1;
    cout << "ÇëÊäÈë×Ö·û´®s2: ";
    cin >> s2;
    int result = indexof(s1, s2);

    if (result != -1)
    {
        cout << "×Ö·û´®s1ÔÚs2ÖÐµÄµÚÒ»´ÎÆ¥ÅäÎ»ÖÃÎª: " << result << endl;
    }
    else
    {
        cout << "×Ö·û´®s1²»ÊÇ×Ö·û´®s2µÄ×Ó´®" << endl;
    }

    return 0;
}
