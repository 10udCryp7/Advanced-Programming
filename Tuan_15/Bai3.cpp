#include <iostream>
#include <iomanip>
using namespace std;

class Time
{
    private:
    int h;
    int m;
    int s;
    public:
    Time(int hour, int minute, int second)
    {
        h = hour;
        m = minute;
        s = second;
        if (s >= 60)
        {
            m+=s/60;
            s-=(s/60)*60;
        }
        if (m >= 60)
        {
            h+=m/60;
            m-=(m/60)*60;
        }
    }
    Time(int hour, int minute)
    {
        h = hour;
        m = minute;
        s = 0;
        if (m >= 60)
        {
            h+=s%60;
            m-=(m%60)*60;
        }
    }
    Time(int hour)
    {
        h = hour;
        m = 0;
        s = 0;
    }
    friend ostream& operator<<(ostream& os,const Time& t)
    {
        os << setfill('0') << setw(2) << t.h << ":"
        << setfill('0') << setw(2) << t.m << ":"
        << setfill('0') << setw(2) << t.s << endl;
        return os;
    }
    bool operator>(const Time& t)
    {
        if (h > t.h)
        {
            return true;
        }
        else if (h == t.h)
        {
            if (m > t.m)
            {
                return true;
            }
            else if (m == t.m)
            {
                if (s > t.s)
                {
                    return true;
                }
            }
        }
        return false;
    }
    bool operator<(const Time& t)
    {
        if (h < t.h)
        {
            return true;
        }
        else if (h == t.h)
        {
            if (m < t.m)
            {
                return true;
            }
            else if (m == t.m)
            {
                if (s < t.s)
                {
                    return true;
                }
            }
        }
        return false;
    }
    bool operator==(const Time& t)
    {
        return (h == t.h && m == t.m && s == t.s);
    }
    bool operator!=(const Time& t)
    {
        return (h != t.h || m != t.m || s != t.s);
    }
    bool operator>=(const Time& t)
    {
        if (h > t.h)
        {
            return true;
        }
        else if (h == t.h)
        {
            if (m > t.m)
            {
                return true;
            }
            else if (m == t.m)
            {
                if (s > t.s)
                {
                    return true;
                }
                else if (s == t.s)
                {
                    return true;
                }
            }
        }
        return false;
    }
    bool operator<=(const Time& t)
    {
        if (h < t.h)
        {
            return true;
        }
        else if (h == t.h)
        {
            if (m < t.m)
            {
                return true;
            }
            else if (m == t.m)
            {
                if (s < t.s)
                {
                    return true;
                }
                else if (s == t.s)
                {
                    return true;
                }
            }
        }
        return false;
    }
    int hour()
    {
        return h;
    }
    int minute()
    {
        return m;
    }
    int second()
    {
        return s;
    }
};
