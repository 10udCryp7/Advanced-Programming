#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> res;
    res.push_back(0);
    int count = 0;
    for (int i = 0; i < int(s.size()); i++)
    {
        if (s[i] == 'C' && i!=int(s.size()) - 1)
        {
            count++;
        }
        else
        {
            res.push_back(count);
            count = 0;
        }
    }
    sort(res.begin(), res.end());
    cout << res[int(res.size()) -1] + res[int(res.size()) - 2];
}
