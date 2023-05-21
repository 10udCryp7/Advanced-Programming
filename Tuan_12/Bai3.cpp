#include <iostream>
using namespace std;

double evaluateFractionString(string fraction)
{
    bool Negative = false;
    if (fraction[0] == '-') Negative = true;
    int Point = 0;
    for (int i = 0; i < int(fraction.size()); i++)
    {
        if (fraction[i] == '/')
        {
            Point = i;
        }
    }
    double first = 0;
    double second = 0;
    if (Negative)
    {
        for (int i = 1; i < Point; i++)
        {
            if (!(fraction[i] >='1' && fraction[i] <= '9'))
            {
                throw "Bad fraction string.";
            }
            else first = first*10 + int(fraction[i] - '0');
        }
        for (int i = Point+ 1; i < int(fraction.size()); i++)
        {
            if (!(fraction[i] >='1' && fraction[i] <= '9'))
            {
                throw "Bad fraction string.";
            }
            else second = second*10 + int(fraction[i] - '0');
        }
        return - first/second;
    }
    for (int i = 0; i < Point; i++)
    {
        if (!(fraction[i] >='1' && fraction[i] <= '9'))
            {
                throw "Bad fraction string.";
            }
        else first = first*10 + int(fraction[i] - '0');
    }
    for (int i = Point+ 1; i < int(fraction.size()); i++)
    {
        if (!(fraction[i] >='1' && fraction[i] <= '9'))
            {
                throw "Bad fraction string.";
            }
        else second = second*10 + int(fraction[i] - '0');
    }
    return first/second;
}
