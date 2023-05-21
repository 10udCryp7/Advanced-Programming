#include <iomanip>
#include <vector>
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
        cout << setprecision(2) << fixed << "(" << x_ << ", " << y_ << ")" << endl;
    }; 
    void truncate(double length)
    {
        x_-=length;
        y_-=length;
    };
    bool isOrtho(const Vector& v) const
    {
        return x_*v.x_+y_*v.y_ == 0;
    };
    static float dot(const Vector& v1, const Vector& v2)
    {
        return v1.x_*v2.x_ + v1.y_*v2.y_;
    };
    static float cross(const Vector& v1, const Vector& v2)
    {
        return v1.x_*v2.y_ - v1.y_*v2.x_;
    };
    friend ostream& operator<<(ostream& os, const Vector& v)
    {
        os << setprecision(2) << fixed << "(" << v.x_ << ", " << v.y_ << ")" << endl;
        return os;
    }; 
};
