#include <iostream>
using namespace std;

string findLongestPrefix(string s1, string s2)
{
    int size = int(s1.size()) > int(s2.size()) ? int(s2.size()) : int(s1.size());
    int count = 0;
    int point = 0;
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        if (s1[i] == s2[i]) {
            count++;
        }
        else {
            if (count > max)
            {
                max = count;
                point = i;
            }
            count = 0;
            continue;
        }
    }
    string res = "";
    for (int i = point - max; i < point; i++)
    {
        res+=s1[i];
    }
    return res;
}
