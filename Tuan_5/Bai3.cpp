#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    string arr[1000];
    char charFind[1000];
    for (int i = 0; i < T; i++)
    {
        cin >> arr[i];
        cin >> charFind[i];
    }
    
    for (int i = 0; i < T; i++) {
        if (arr[i].find(charFind[i]) != string::npos)
        {
            cout << arr[i].find(charFind[i]);
        }
        else cout << -1;
        cout << endl;
    }
}

