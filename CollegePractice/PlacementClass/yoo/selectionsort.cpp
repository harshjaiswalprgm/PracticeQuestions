#include <iostream>
using namespace std;
int main()
{
    int n = 6;

    int arr[n];
    cout << "enter the element" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    for (int j = i + 1; j < n; j++)
    {
        if (min > arr[j])
        {
            min = arr[j];
            index = j;
        }
    }
    int temp = arr[i];
    arr[i] = arr[index];
    arr[index] = temp;
}

return 0;
}