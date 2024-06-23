#include <iostream>
using namespace std;
int arr[10];
void insHeap(int &N)
{
    N = N + 1;
    int PTR = N;
    int data;
    cin >> data;
    cout << "Enter the N of arr[]" << endl;
    while (PTR > 1)
    {

        int Par = PTR / 2;
        if (data <= arr[Par])
        {
            arr[PTR] = data;
            return;
        }
        arr[PTR] = arr[Par];
        PTR = Par;
    }
    arr[1] = data;
}

// void delHeap(int &N){
//     if(){
        
//     }
// }
int main()
{
    int N = 0;
    char h = 'y';
    while (h == 'y')
    {
        insHeap(N);
        cout << "do u want to continue :" << endl;
        cin >> h;
    }
    for (int i = 1; i <= N; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
    return 0;
}