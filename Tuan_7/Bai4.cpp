string combine(const vector<string>& words)
{
    string res = "";
    vector<string> word;
    for (int i = 0; i < int(words.size()); i++)
    {
        word.push_back(words[i]);
    }
    for (int i = 0; i < int(words.size()) - 1; i++)
    {
        for (int j = i + 1; j < int(words.size()); j++)
        {
            if (word[j]>word[i])
            {
                string temp = word[i];
                word[i] = word[j];
                word[j] = temp;
            }
        }
    }
    for (int i = 0; i < int(words.size()) - 1; i++)
    {
        res+=word[i] + " ";
    }
    res+=word[int(word.size()) - 1];
    return res;
}
