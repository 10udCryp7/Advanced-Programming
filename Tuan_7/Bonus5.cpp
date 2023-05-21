#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<char> save;
    string s;
    getline(cin, s);
    
    int count = 0;
    int max = 0;
    int n = int(s.size());
    for (int i = 0; i < n; i++)
    {
        s[i] = tolower(s[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            if (s[i] == save.top())
            {
                save.push(s[i]);
            }
            while(!save.empty())
            {
                save.pop();
                count++;
            }
        }
        else if (save.empty() || s[i] == save.top())
        {
            save.push(s[i]);
        }
        else if (save.top() != s[i])
        {
            while(!save.empty())
            {
                save.pop();
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
    cout << max;
}
