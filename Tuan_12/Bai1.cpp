#include <iostream>
#include <fstream>
#include <map>
using namespace std;




int main()
{
    string file_path;
    getline(cin, file_path);
    ifstream file(file_path);
    map<char,int> char_count;
    string line;
    while (getline(file, line))
    {
        for (char x : line)
        {
            if (isalpha(x))
            {
                char_count[tolower(x)]++;  
            }
            
        }
    }
    for (char x = 'a'; x <= 'z'; x++)
    {
        if (char_count.count(x))
        {
            cout << x << ": " << char_count[x] << endl;
        }
    }
    file.close();
}
