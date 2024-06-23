#include <iostream>
using namespace std;

bool differelmnt(str, int i, int j)
{
    vector<bool> checked(200);
    for (int k = i; k <= j; k++)
    {
        if (checked[str[k]] == true)
            return false;
        checked[str[k]] = true;
    }
    return true;
}

int LSubS(string str)
{
    int n = str.size();
    int res = 0;
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            if (differelmnt(str, i, j))
                res = max(res, j - i + 1);
    return res;
}

int main()
{
    string str = "ABCDEDFG";
    cout << "The input string is " << str << endl;
    int len = LSubS(str);
    cout << "The length of the longest non-repeating "
            "character substring is "
         << len;
    return 0;
}
