void print(const Complex& c)
{
    bool negative;
    bool b_i;
    bool isA;
    bool isB;
    if (c.b < 0)
    {
        negative = true;
    }
    else if (c.b > 0)
    {
        negative = false;
    }
    if (c.b == 1 || c.b == -1)
    {
        b_i = true;
    }
    else
    {
        b_i = false;
    }
    if (c.a == 0)
    {
        isA = false;
    }
    else isA = true;
    if (c.b == 0)
    {
        isB = false;
    }
    else isB = true;
    if (!isA && !isB)
    {
        cout << 0;
    }
    else
    {
        if (isA)
        {
            cout << c.a;
        }
        if (isB)
        {
            if (negative)
            {
                cout << "-";
            }
            else if (!negative && isA)
            {
                cout << "+";
            }
            if (b_i)
            {
                cout << "i";
            }
            else
            {
                cout << abs(c.b) << "i";
            }
        }
    }
    cout << endl;
}
Complex add(const Complex& c1, const Complex &c2)
{
    Complex res;
    res.a = c1.a+c2.a;
    res.b = c1.b+c2.b;
    return res;
}
int compare(const Complex& c1, const Complex &c2)
{
    if ((sqrt(c1.a*c1.a + c1.b*c1.b)) > (sqrt(c2.a*c2.a + c2.b*c2.b)))
    {
        return 1;
    }
    else if ((sqrt(c1.a*c1.a + c1.b*c1.b)) < (sqrt(c2.a*c2.a + c2.b*c2.b)))
    {
        return -1;
    }
    return 0;
}
