#include <iostream>
#include <cctype>
using namespace std;

int parseHex(const char* hexString) {
    int result = 0;
    for (int i = 0; hexString[i] != '\0'; i++) {
        char c = hexString[i];
        int value;
        if (isdigit(c)) {
            value = c - '0';
        }
        else if (c >= 'a' && c <= 'f') {
            value = c - 'a' + 10;
        }
        else if (c >= 'A' && c <= 'F') {
            value = c - 'A' + 10;
        }
        else {
            cout << "Invalid hex character: " << c << endl;
            return -1;
        }
        result = result * 16 + value;
    }
    return result;
}

int main() {
    char hexString[20];
    cout << "������16�������ִ������磺A5��1f��FF�ȣ���";
    cin >> hexString;
    int decimalValue = parseHex(hexString);
    if (decimalValue != -1) {
        cout << "16������ " << hexString << " ת��Ϊ10����Ϊ: " << decimalValue << endl;
    }
    return 0;
}
