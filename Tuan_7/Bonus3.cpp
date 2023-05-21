#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> A;
    vector<int> B;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        A.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        B.push_back(x);
    }
    int maxA = A[0];
    int minB = B[0];
    for (int i = 0; i < n; i++)
    {
        if (A[i] > maxA)
        {
            maxA = A[i];
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (B[i] < minB)
        {
            minB = B[i];
        }
    }
    int count = 0;
    for (int i = maxA; i <= minB; i++)
    {
        bool check1 = true;
        for (int j = 0; j < n; j++)
        {
            if (i%A[j]!=0)
            {
                check1 = false;
                break;
            }
        }
        if (check1 == true)
        {
            bool check2 = true;
            for (int j = 0; j < m; j++)
            {
                if (B[j]%i!=0)
                {
                    check2 = false;
                    break;
                }
            }
            if (check2 == true)
            {
                count++;
            }
        }
    }
    cout << count;
}
