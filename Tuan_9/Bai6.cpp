
double getArea(Triangle tri)
    {
        if (tri.a >= tri.b + tri.c || tri.b >= tri.a + tri.c || tri.c >= tri.a + tri.b || tri.a <= 0 || tri.b <= 0 || tri.c <= 0)
        {
            return -1;
        }
        double p = (tri.a + tri.b + tri.c)/2;
        return sqrt(p*(p-tri.a)*(p-tri.b)*(p-tri.c));
    };
