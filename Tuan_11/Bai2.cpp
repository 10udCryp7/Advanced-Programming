class Vector {
    double x_, y_;
public:
    Vector(double x = 0, double y = 0)
    {
        x_ = x;
        y_ = y;
    };  
    void print(int precision = 2, bool newLine = true)
    {
        cout << "(" << setprecision(2) << fixed << x_ << ", " << setprecision(2) << fixed << y_ << ")" << endl; 
    }; 
    Vector& operator=(const Vector& v)
    {
        x_ = v.x_;
        y_ = v.y_;
        return *this;
    };    
    Vector operator+(const Vector& v) const
    {
        Vector res;
        res.x_ = x_+v.x_;
        res.y_ = y_+v.y_;
        return res;
    };
    Vector operator-(const Vector& v) const
    {
        Vector res;
        res.x_ = x_-v.x_;
        res.y_ = y_-v.y_;
        return res;
    };
    Vector& operator+=(const Vector& v)
    {
        x_ += v.x_;
        y_ += v.y_;
        return *this;
    };
    Vector& operator-=(const Vector& v)
    {
        x_ -= v.x_;
        y_ -= v.y_;
        return *this;
    };
};
