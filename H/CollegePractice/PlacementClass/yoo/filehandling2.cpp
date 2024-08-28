#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{

    ofstream myfile;
    myfile.open("C:\\Users\\harss\\Desktop\\hello.txt");
    string extract;
    for (int i = 1; i <= 3; i++)
    {
        string name;
        int tax, gain, extra;
        int result;
        int sallary;

        cout << "Enter name of employee :" << endl;
        cin >> name;
        myfile << name << endl;

        cout << "Enter total sallary :" << endl;
        cin >> sallary;
        myfile << sallary << endl;

        cout << "Enter income tax :" << endl;
        cin >> tax;
        myfile << tax << endl;

        cout << "Enter gain sallary :" << endl;
        cin >> gain;
        myfile << gain << endl;

        cout << "Enter extra sallary :" << endl;
        cin >> extra;
        myfile << extra << endl;

        result = sallary + (gain * sallary) / 100;
        result = result + (extra * result) / 100;
        result = result - (tax * result) / 100;

        cout << "Total sallary is :" << result << endl;
        myfile << result << endl;
    }
    myfile.close();

    ifstream harsh;
    harsh.open("C:\\Users\\harss\\Desktop\\hello.txt");
    while (getline(harsh, extract))
    {
        /* code */
        cout << extract << endl;
    }

    return 0;
}
