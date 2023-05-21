#include <iostream>
using namespace std;
void HoanVi(string s, string t)
{
    int l = s.size();
    if (l == 0)
    {
        cout << t << endl;
        return;
    }
    for (int i = 0; i < l; ++i)
    {
        char c = s[i];
        string temp = s;
        temp.erase(i, 1);
        HoanVi(temp, t + c);
    }
}

int main()
{
    string s;
    cin >> s;
    HoanVi(s, "");
    return 0;
}
