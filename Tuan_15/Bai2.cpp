    Point::Point()
    {
        x = 0;
        y = 0;
    }; // Hàm kh?i t?o di?m (0, 0)
    Point::Point(double x, double y)
    {
        this->x = x;
        this->y = y;
    }; // Hàm kh?i t?o t? to? d? x, y
    Point::Point(const Point& p)
    {
        x = p.x;
        y = p.y;
    };
    Triangle::Triangle(Point a, Point b, Point c)
    {
        p1.x = a.x;
        p1.y = a.y;
        p2.x = b.x;
        p2.y = b.y;
        p3.x = c.x;
        p3.y = c.y;
    }; 
    double Triangle::getPerimeter() const
    {
        double c1 = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
        double c2 = sqrt(pow(p3.x - p2.x, 2) + pow(p3.y - p2.y, 2));
        double c3 = sqrt(pow(p1.x - p3.x, 2) + pow(p1.y - p3.y, 2));
        return c1 + c2 + c3;
    };
    double Triangle::getArea() const
    {
        double c1 = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
        double c2 = sqrt(pow(p3.x - p2.x, 2) + pow(p3.y - p2.y, 2));
        double c3 = sqrt(pow(p1.x - p3.x, 2) + pow(p1.y - p3.y, 2));
        double p = (c1 + c2 + c3)/2;
        return sqrt(p*(p-c1)*(p-c2)*(p-c3));
    }; 
