#include <iostream>
#include <cmath>
using namespace std;
int cal(int x, int n, int num)
{
    if (x == 0) return 1;
    if (x<0 || num>x) return 0;
    int count = 0;
    for (int i = num; pow(i,n) <= x; i++)
    {
        count+=cal(x-pow(i,n), n, i+1);
    }
    return count;
}

int main()
{
    int n,k;
    cin >> n >> k;
    cout << cal(n, k, 1);
}





