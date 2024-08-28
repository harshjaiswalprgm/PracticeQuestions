#include <iostream>
using namespace std;
int main()
{
    int array[] = {1, 2, 3, 3, 4};
    int num;
    int counter = 0;
    cout << "enter which no. you are looking for" << endl;
    cin >> num;
    for (int i = 0; i < 4; i++)
        if (array[i] == num)
        {
             cout << "element is at " << array[i]<< " " << "position" << endl;
            cout << counter++;
        }

    return 0;
}