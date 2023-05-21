#include <iostream>
using namespace std;

int max(int arr[], int first, int last)
{
    int max = arr[first];
    for (int i = first; i < last; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - k + 1; i++)
    {
        cout << max(arr, i, i + k) << " ";
    }
}
