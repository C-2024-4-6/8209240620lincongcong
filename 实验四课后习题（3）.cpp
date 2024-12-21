#include <iostream>
using namespace std;

void sortArray(int* arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int size;
    cout << "����������Ԫ�صĸ�����";
    cin >> size;
    int* arr = new int[size];
    cout << "������ " << size << " ��������" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    sortArray(arr, size);
    cout << "����������Ԫ��Ϊ��" << endl;
    for (int* ptr = arr; ptr < arr + size; ptr++) {
        cout << *ptr << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}
