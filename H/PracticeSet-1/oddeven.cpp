#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter the value" << endl;
    cin >> a, b;
    if(a%2==0){
        cout << "number is even :" << endl;
    }else{
        cout << "number is odd :" << endl;
    }

    // if(a%2==1){
    //     cout << "number is odd :" << endl;
    // }else{
    //     cout << "number is even :" << endl;
    // }
    return 0;
}