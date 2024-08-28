#include <iostream>
using namespace std;

class truck
{
    float diesel;
    float gallon;

    float distance;
    float new_distance;

    float count;
    float uscount;

public:
    void getdata()
    {
        cout << "diesel put in the tank: " << endl;
        cin >> diesel;

        cout << "how far the truck goes :" << endl;
        cin >> distance;
    }
    void calculate()
    {
        if (distance != 0)
        {
            cout << (diesel / distance) * 100;
            gallon = diesel * 0.264;
            new_distance = distance * 0.6214;
            uscount = (gallon / new_distance) * 100;
        }
        else
        {
            count = 0;
            uscount = 0;
        }
    }

    void display()
    {
        ofstream fout;
        fout.open("admin.txt");
        cout << "liters of diesel used in per 100 km :" << count << endl;
        cout << "liters of gallon in per miles : " << fixed << setprecision(2) << uscount << endl;
    }
};

int main()
{
truck h;
h.getdata();
h.calculate();
ofstream fout;
foutout open ("admin.txt"ios::out);
foutwrite((char*)&h, sizeof(h2));
h2.display();
fin.close();
    return 0;
}