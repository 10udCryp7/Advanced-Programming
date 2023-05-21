#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string arr[1000];
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        getline(cin, arr[i]);
	}
    int count = 0;
    int max = 0;
    int point = 0;
    
    int size = 0;
    for (int i = 0; i < n; i++)
    {
        if (int(arr[i].size()) > size)
        {
            size = int(arr[i].size());
        }
    }
    
    
    for (int j = 0; j < size; j++)
    {
    	bool check = true;
        for (int i = 0; i < n; i++)
        {
            if (int(arr[0][j]) != int(arr[i][j]))
            {
                if (count > max)
                {
                    max = count;
                    point = j;
                    check = false;   
                }
                count = 0;
                break;
            }
        }
        if (check == false)
        {
            break;
        }
        else count++;
    }
    
    
    for (int i = point - max; i < point; i++)
    {
        cout << arr[0][i];
    }
}
