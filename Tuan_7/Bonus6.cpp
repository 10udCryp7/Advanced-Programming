#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            if (arr[i] * st.top() <= 0)
            {
                st.push(arr[i]);
            }
            while(!st.empty())
            {
                st.pop();
                count++;
            }
        }
        else if (st.empty() || st.top() * arr[i] <= 0)
        {
            st.push(arr[i]);
        }
        else if (st.top() * arr[i] > 0)
        {
            while(!st.empty())
            {
                st.pop();
                count++;
            }
            i-=1;
        }
        if (count > max)
        {
            max = count;
        }
        count = 0;
    }
    if (max == 1)
    {
        max = 0;
    }
    cout << max;
}
