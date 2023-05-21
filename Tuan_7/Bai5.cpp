#include <string.h>
string combineWordsFromFile(char fileName[])
{
    string File = "";
    string res = "";
    for (int i = 0; i < 10; i++)
    {
        File+=fileName[i];
    }
    ifstream file(File);
    vector<string> word;
    string line;
    while(file >> line)
    {
        word.push_back(line);
    }
    for (int i = 0; i < int(word.size()) - 1; i++)
    {
        for (int j = i + 1; j < int(word.size()); j++)
        {
            if (word[j]>word[i])
            {
                string temp = word[i];
                word[i] = word[j];
                word[j] = temp;
            }
        }
    }
    for (int i = 0; i < int(word.size()) - 1; i++)
    {
        res+=word[i] + " ";
    }
    res+=word[int(word.size()) - 1];
    return res;
}
