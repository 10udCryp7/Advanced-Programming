class MyFraction {
private:
    int a, b;
public:
    MyFraction(int _a = 1, int _b = 1);
    void print() const;
    MyFraction add(const MyFraction& f) const;
    MyFraction substract(const MyFraction& f) const;
    MyFraction multiply(const MyFraction& f) const;
    MyFraction divide(const MyFraction& f) const;
    void simplify();
    int compare(const MyFraction& f) const;
};
MyFraction::MyFraction(int _a, int _b)
{
    a = _a;
    b = _b;
}
void MyFraction::print() const
{
    int gcd;
    int A = a;
    int B = b;
    while (A!=0 && B!=0)
    {
        if (A>=B)
        {
            A%=B;
        }
        else if (A<B)
        {
            B%=A;
        }
        if (A==0)
        {
            gcd = B;
        }
        else
        {
            gcd = A;
        }
    }
    if (b==0) 
    {
        cout << "invalid";  
    }
    else cout << a/gcd << "/" << b/gcd;
    
}

MyFraction MyFraction::add(const MyFraction& f) const
{
    MyFraction res;
    res.b = b*f.b;
    res.a = a*f.b+f.a*b;
    return res;
}

MyFraction MyFraction::substract(const MyFraction& f) const
{
    MyFraction res;
    res.b = b*f.b;
    res.a = a*f.b-f.a*b;
    return res;
}
MyFraction MyFraction::multiply(const MyFraction& f) const
{
    MyFraction res;
    res.a = a*f.a;
    res.b = b*f.b;
    return res;
}
MyFraction MyFraction::divide(const MyFraction& f) const
{
    MyFraction res;
    res.a = a*f.b;
    res.b = b*f.a;
    return res;
}
void MyFraction::simplify()
{
    
    int gcd;
    int A = a;
    int B = b;
    while (A!=0 && B!=0)
    {
        if (A>B)
        {
            A%=B;
        }
        else if (A<B)
        {
            B%=A;
        }
        if (A==0)
        {
            gcd = B;
        }
        else
        {
            gcd = A;
        }
    }
    a/=gcd;
    b/=gcd;
}

int MyFraction::compare(const MyFraction& f) const
{
    MyFraction res;
    res.a = a;
    res.b = b;
    MyFraction res2;
    res2 = res.substract(f);
    if (res2.a*res2.b>0)
    {
        return 1;
    }
    else if (res2.a*res2.b<0)
    {
        return -1;
    }
    return 0;
}
