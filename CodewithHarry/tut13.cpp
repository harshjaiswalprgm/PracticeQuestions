#include <iostream>
using namespace std;
int main()
{

    int Mathmarks[] = {10, 20, 30, 40, 50};

    cout << "Mathmarks [0] is " << Mathmarks[0] << endl;
    cout << "Mathmarks [1] is " << Mathmarks[1] << endl;
    cout << "Mathmarks [2] is " << Mathmarks[2] << endl;
    cout << "Mathmarks [3] is " << Mathmarks[3] << endl;
    cout << "Mathmarks [4] is " << Mathmarks[4] << endl;

    Mathmarks[2] = 455;
    cout << "These are the pointer which are pointing to an array.." << endl;

    int *p = Mathmarks;
    cout << "Mathmarks *p is " << *p << endl;
    cout << "Mathmarks *(p+1)is " << *(p + 1) << endl;
    cout << "Mathmarks *(p+2)is " << *(p + 2) << endl;
    cout << "Mathmarks *(p+3)is " << *(p + 3) << endl;
    cout << "Mathmarks *(p+4)is " << *(p + 4) << endl;

    return 0;
}