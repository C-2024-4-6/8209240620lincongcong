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
    cout << "请输入数组元素的个数：";
    cin >> size;
    int* arr = new int[size];
    cout << "请输入 " << size << " 个整数：" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    sortArray(arr, size);
    cout << "排序后的数组元素为：" << endl;
    for (int* ptr = arr; ptr < arr + size; ptr++) {
        cout << *ptr << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}
