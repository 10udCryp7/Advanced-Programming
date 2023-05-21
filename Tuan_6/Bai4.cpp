#include <iostream>
using namespace std;

void generatePassword(string s, int length, string prefix)
{
    int size = s.length();
    if (length == 0)
    {
        cout << prefix << endl;
    }
    else if (length>0)
    {
        for (int i = 0; i < size; i++)
        {
            generatePassword(s, length - 1, prefix + s[i]);
        }
    }
}

int main()
{
    string s;
    cin >> s;
    int length = s.length();
    for (int i = 1; i <= length; i++)
        generatePassword(s, i, "");
}
