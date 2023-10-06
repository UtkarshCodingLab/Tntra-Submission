#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string temp = "";
    for (int i = s.length() - 1; i >= 0; i--)
    {
        temp.push_back(s[i]);
    }
    if (temp == s)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}
