#include <iostream>
using namespace std;


void sortNum(string& s)
{
    for (int i = 0; i < int(s.size()); i++)
    {
        for (int j = i+1; j < int(s.size()); j++)
        {
            if (int(s[i])>int(s[j]))
            {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}
int main()
{
    int T;
    cin >> T;
    string arr[T];
    for (int i = 0; i < T; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < T; i++)
    {
        sortNum(arr[i]);
    }
    for (int i = 0; i < T; i++)
    {
        cout << arr[i] << endl;
    }
}
