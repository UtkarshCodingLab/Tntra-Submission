#include <iostream>
using namespace std;

int main()
{
     string a, b;
     cin >> a >> b;
     int n = a.length();
     cout << "Values before Swapping: "
          << "a = " << a << " and "
          << "b = " << b << endl;
     a = a + b;
     b = a.substr(0, n);
     a = a.substr(n);
     cout << "Values after Swapping: "
          << "a = " << a << " and "
          << "b = " << b;
     return 0;
}
