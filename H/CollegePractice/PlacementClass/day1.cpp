/* [1]  
Ritik wants a magic board which display a character for a corresponiding no. for his science project . Help him to develop
such application.

forex- when the digits 65,54,43,32 are entered the alphabet ABCD are to be displayed.
*/
// #######################################################################################################################################
/* [2]
Chaman planed to choose four digit lucky number for his car. his lucky number are 3, 5, 3,7. Help him to find the number,
whose sum is divisible is by 3 or 5 or 7 . Provide a valid car number if it display the wrong number the n print number is nit valid.

do not take negative number*/
#include <iostream>
using namespace std;
int main()
{

    int i, j, k, l;
    cout << "enter the number :" << endl;
    cin >> i >> j >> k >> l;
    if ((i + j + k + l) % 5)
    {

        cout << "it's valid number :" << endl;
    }
    else
    {

        cout << "it's not a valid number :" << endl;
    }

    // int a = [4];
    // switch (character)
    // {
    // case 1:
    //     cout << "A"' break;

    // case 2:
    //     cout << "B"' break;

    // case 3:
    //     cout << "C"' break;

    // case 4:
    //     cout << "D"' break;
    // }
    return 0;
}

// #include<iostream>
// using namespace std;
// int main()
// {
// int a,b,c,d;
// cout<<"enter any 4 numbers";
// cin>>a>>b>>c>>d;
// if(a==65 && b==66 && c==67 && d==68){
//     cout<<"ABCD"<<endl;
// }
// //if(a==n && b==n && c==n && d==n)
// {
//     cout<<"ABCD";
// }

// return 0;
// }
