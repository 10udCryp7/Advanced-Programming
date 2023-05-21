string convertDecimalToBinary(int number)
{
    string res = "";
    string result = "";
    int x = number;
    while(x!=0)
    {
        res+=(x%2+'0');
        x/=2;
    }
    for (int i = int(res.size()) - 1; i >= 0; i--)
    {
        result+=res[i];
    }
    return result;
}
