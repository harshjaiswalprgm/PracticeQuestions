// //program to implement single level inheretance using constructor and destructor in base class and derived class.

// #include <iostream>
// using namespace std;
// class base
// {
// public:
//     int a;

// public:
//     base(int a)
//     {
//         cout<<"constructor is called"<<endl;
//         this->a = a;
//     }
//     void displa()
//     {
//         cout << a << endl;
//     }
//     ~base()
//     {
//         cout << "distructor is called the base class" << endl;
//     }
// };
// class derived : public base
// {
// private:
//     int c;

// public:
//     derived(int c,int a) : base(a)
//     {
//         cout << "constructor is called " << endl;
//         this->c = c;
//     }
//     void display()
//     {
//         cout << c << endl;
//     }
//     ~derived()
//     {
//         cout << "derived class destrucotr" << endl;
//     }
// };

// int main()
// {

//     derived d(10, 20);
//     d.display();
//     d.displa();

//     return 0;
// }

// designe a class called distanceconverter  that convert distance between units. (eg. meters, feet, kilometers) . implement method for setting a distance in one unit and retrving it in another.

// #include <iostream>
// using namespace std;
// class distanceconverter
// {
//     // int meter;
//     // float feet;
//     // float kilometer;

// public:
//     // int meter;
//     // float feet;
//     // float kilometer;
//     float distance;
//     distance()
//     {
//         distance = 0;
//     }
// };

// void display()
// {
//     cout < < < < endl;
// }

// int main()
// {
//     distanceconverter d1;
//     obj.display;
//     return 0;
// }


#include <iostream>

using namespace std;
class Distance {
  public:
    float distance;

    Distance() {
      distance = 0;
    }

    Distance(float distance) {
      this->distance = distance;
    }

    void setDistance(float distance) {
      this->distance = distance;
    }

    float getDistance() {
      return distance;
    }

    operator float() {
      return distance * 1000;
    }

    // Distance(float meter){
    //     this->meter = meter;
    // }
};

int main() {
  Distance distance(10);

  cout << "Distance in kilometers: " << 500 << endl;
  cout << "Distance in meters: " << (float)500 << endl;
  cout << "Distance in feet:"<<" " <<endl;

  return 0;
}