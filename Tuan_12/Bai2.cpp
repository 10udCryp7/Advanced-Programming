#include <fstream>
#include <iostream>
#include <map>
using namespace std;

int main()
{
    string file_path;
    getline(cin, file_path);
    ifstream file(file_path);
    string line;
    map<char,bool> check;
    map<char,int> arr;
    
    while (getline(file, line))
    {
        for (char c : line)
        {
            if (isalpha(c))
            {
                check[c] = true;
            }
        }
        for (char c: line)
        {
            if (isalpha(c))
            {
                if (check[c] == true)
                {
                    arr[c]++;
                    check[c] = false;
                }
            }
        }
    }
    for (char c = 'a'; c <= 'z'; c++)
    {
        if (arr.count(c))
        cout << c << ": " << arr[c] << endl;
    }
}
