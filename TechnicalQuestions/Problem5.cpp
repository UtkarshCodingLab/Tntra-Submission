#include <iostream>
using namespace std;

int main()
{
     int a, b;
     cin >> a >> b;
     cout << "Values before Swapping: "
          << "a = " << a << " and "
          << "b = " << b << endl;
     a = a + b;
     b = a - b;
     a = a - b;
     cout << "Values after Swapping: "
          << "a = " << a << " and "
          << "b = " << b;
     return 0;
}
