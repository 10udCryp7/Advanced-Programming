class MyIntSet{
public:
    MyIntSet()
    {
        maxSize = 10;
        elements = new int[maxSize];
        num = 0;
    }
    MyIntSet(int a[], int n)
    {
        maxSize = 10;
        elements = new int[maxSize];
        num = 0;
        for (int i = 0; i < n; i++)
        {
            insertVal(a[i]);
        }
    }
    ~MyIntSet()
    {
        delete[] elements;
    }
    bool insertVal(int v)
    {
        if (findVal(v))
        {
            return false;
        }
        if (num == maxSize)
        {
            int *temp = new int[maxSize*2+1];
            for (int i = 0; i < num; i++)
            {
                temp[i] = elements[i];
            }
            delete[] elements;
            elements = temp;
            maxSize = maxSize*2+1;
        }
        elements[num] = v;
        num++;
        return true;
    }
    bool eraseVal(int v)
    {
        int index = -1;
        if (findVal(v))
        {
            for (int i = 0; i < num; i++)
            {
                if (elements[i] == v)
                {
                    index = i;
                    break;
                }
            }
        }
        if (index == -1)
        {
            return false;
        }
        for (int i = index; i < num - 1; i++)
        {
            elements[i] = elements[i+1];
        }
        num--;
        return true;
    }
    void clearAll()
    {
        num = 0;
    }
    bool findVal(int v) const
    {
        for (int i = 0; i < num; i++)
        {
            if (elements[i] == v)
            {
                return true;
            }
        }
        return false;
    }
    bool isEmpty() const
    {
        return num == 0;
    }
    int getSize() const
    {
        return num;
    }
    const int* getBeginPtr() const
    {
        return elements;
    }
;
    const int* getEndPtr() const
    {
        return &elements[num - 1];
    }
private:
    int maxSize;
    int* elements;
    int num;
};
