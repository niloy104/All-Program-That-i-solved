#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int arr[] = {10, 1, 20, 2, 30};

    int size = sizeof(arr) / sizeof(int);

    sort(arr, arr + 5);
    cout << "Sorted elements are: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}