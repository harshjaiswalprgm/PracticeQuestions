#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int i, total, subject;
    ofstream fout;
    int subject[5];
    fout.open("C:\\Users\\harss\\Desktop\\hello.txt");
    for (int i = 1; i <= 3; i++)
    {
        cin >> subject[i];
    }

    cout << "Total marks of student : " << i << endl;
    fout << "Total marks of student : " << i << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << total = total + subject[i] << endl;
    }
    cout << total << endl;

    return 0;
}
.