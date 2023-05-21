#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
    
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end(), greater<int>());
    vector<int> A;
    int sumA = 0;
    vector<int> B;
    int sumB = 0;
    for (int i = 0; i < n; i++)
    {
        if (sumA >= sumB)
        {
            sumB+=arr[i];
            B.push_back(arr[i]);
        }
        else
        {
            sumA+=arr[i];
            A.push_back(arr[i]);
        }
    }
    cout << abs(sumA - sumB);
}
