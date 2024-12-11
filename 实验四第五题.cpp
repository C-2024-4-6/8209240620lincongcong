#include <iostream>
#include <string>
using namespace std;

int indexOf(const string& s1, const string& s2)
{
    if (s1.empty() || s2.empty() || s1.size() > s2.size()) {
        return -1;
    }

    for (size_t i = 0; i <= s2.size() - s1.size(); i++) {
        bool match = true;
        for (size_t j = 0; j < s1.size(); j++)
        {
            if (s2[i + j] != s1[j])
            {
                match = false;
                break;
            }
        }
        if (match)
        {
            return i;
        }
    }
    return -1;
}

int main() {
    string s1, s2;
    cout << "Enter the first string (s1): ";
    getline(cin, s1);
    cout << "Enter the second string (s2): ";
    getline(cin, s2);

    int result = indexOf(s1, s2);
    if (result != -1)
    {
        cout << result;
    }
    else
    {
        cout << "The substring '" << s1 << "' is not found in '" << s2 << "'." << endl;
    }

    return 0;
}
