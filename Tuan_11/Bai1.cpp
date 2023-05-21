#include <iostream>
using namespace std;
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
    }
    void truncate(double length);
    bool isOrtho(const Vector& v) const;
    static float dot(const Vector& v1, const Vector& v2);
    static float cross(const Vector& v1, const Vector& v2);
    friend ostream& operator<<(ostream& os, const Vector& v)
    {
        os << "(" << setprecision(2) << fixed << v.x_ << ", " << setprecision(2) << fixed << v.y_ << ")" << endl;
        return os;
    }
};

void Vector::truncate(double length)
{
    x_-=length;
    y_-=length;
}
bool Vector::isOrtho(const Vector& v) const
{
    if (x_*v.x_+y_*v.y_ == 0)
    {
        return true;
    }
    return false;
}

float Vector::dot(const Vector& v1, const Vector& v2)
{
    return v1.x_*v2.x_+v1.y_*v2.y_;
}

float Vector::cross(const Vector& v1, const Vector& v2)
{
    return v1.x_*v2.y_-v1.y_*v2.x_;
}



