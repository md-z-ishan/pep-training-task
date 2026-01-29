#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    cout << arr[0] << " ";
    for (int i = 1; i < n; i++)
    {
        arr[i] = arr[i] + arr[i - 1];
        cout << arr[i] << " ";
    }
    return 0;
}