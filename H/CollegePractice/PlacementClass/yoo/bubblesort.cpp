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
/*
 for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
*/

cout<<endl;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])    //we can add the "=" operator if the value is same to check the same element.
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}