#include <iostream>
#include <string>
using namespace std;

void firstSpace(string& s)
{
    while (s[0] == ' ')
    {
        s.erase(s.begin());
        
    }
}

void midSpace(string& s)
{
    for (int i = 0; i < int(s.size()); i++)
    {
        if (s[i] == ' ')
        {
            while (s[i+1] == ' ')
            {
                s.erase(s.begin()+i);
            }
        }
    }
}

void lastSpace(string& s)
{
    if (s[int(s.size()) - 1] == ' ')
    {
        s.pop_back();
    }
}


int main() {
    int T;
    cin >> T;
    string arr[1000];
    cin.ignore();
    for (int i = 0; i < T; i++)
    {
        getline(cin, arr[i]);
    }
    for (int i = 0; i < T; i++)
    {
        firstSpace(arr[i]);
        midSpace(arr[i]);
        lastSpace(arr[i]);
    }
    for (int i = 0; i < T; i++)
    {
        cout << arr[i] << endl;
    }
}
