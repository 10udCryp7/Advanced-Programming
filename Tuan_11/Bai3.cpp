class Vector {
    double x_, y_;
public:
    Vector(double x = 0, double y = 0)
    {
        x_ = x;
        y_ = y;
    }
     
    void print(int precision = 2, bool newLine = true)
    {
        cout << "(" << setprecision(2) << fixed << x_ << ", " << setprecision(2) << fixed << y_ << ")" << endl;
    }; 
    Vector operator+(double s) const
    {
        Vector res;
        res.x_ = x_ + s;
        res.y_ = y_ + s;
        return res;
    }
    Vector operator-(double s) const
    {
        Vector res;
        res.x_ = x_ - s;
        res.y_ = y_ - s;
        return res;
    }
    Vector operator*(double s) const
    {
        Vector res;
        res.x_ = x_ * s;
        res.y_ = y_ * s;
        return res;
    }
    Vector operator/(double s) const
    {
        Vector res;
        res.x_ = x_ / s;
        res.y_ = y_ / s;
        return res;
    }
    Vector& operator+=(double s)
    {
        x_+=s;
        y_+=s;
        return *this;
    };  
    Vector& operator-=(double s)
    {
        x_-=s;
        y_-=s;
        return *this;
    };
    Vector& operator*=(double s)
    {
        x_*=s;
        y_*=s;
        return *this;
    };
    Vector& operator/=(double s)
    {
        x_ /= s;
        y_ /= s;
        return *this;
    };
};
