#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    int min = arr[0];
    for (int j = 1; j < n; j++)
    {
        if (arr[j] > max)
        {
            max = arr[j];
        }
        else if (min > arr[j])
        {
            min = arr[j];
        }
    }
    cout << "Maximum is: " << max << endl;
    cout << "Minimum is: " << min;
    return 0;
}
