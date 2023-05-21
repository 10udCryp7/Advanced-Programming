class Fraction {
    int a, b;
public:
    Fraction(int a = 1, int b = 1)
    {
        this->a = a;
        this->b = b;
    };
    void simplify()
    {
        int A = a;
        int B = b;
        while (A!=0 && B!=0)
        {
            if (A>=B)
            {
                A%=B;
            }
            else
            {
                B%=A;
            }
        }
        int gcd;
        if (A == 0)
        {
            gcd = B;
        }
        if (B == 0)
        {
            gcd = A;
        }
        a/=gcd;
        b/=gcd;
    };
    friend ostream& operator<<(ostream& os, const Fraction& f)
    {
        Fraction res(f.a,f.b);
        res.simplify();
        if (f.b!=0)
        {
            os << res.a << "/" << res.b;
        }
        else
        {
            os << "invalid";
        }
        return os;
    };
    Fraction operator+(const Fraction& f) const
    {
        Fraction res;
        res.a = a*f.b+b*f.a;
        res.b = b*f.b;
        return res;
    };
    Fraction operator-(const Fraction& f) const
    {
        Fraction res;
        res.a = a*f.b-b*f.a;
        res.b = b*f.b;
        return res;
    };
    Fraction operator*(const Fraction& f) const
    {
        Fraction res;
        res.a = a*f.a;
        res.b = b*f.b;
        return res;
    };
    Fraction operator/(const Fraction& f) const
    {
        Fraction res;
        res.a = a*f.b;
        res.b = b*f.a;
        return res;
    };
    
    bool operator>(const Fraction& f) const
    {
        return a*f.b-b*f.a>0;
    };
    bool operator<(const Fraction& f) const
    {
        return a*f.b-b*f.a<0;
    };
};
