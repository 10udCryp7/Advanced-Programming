int mysum(int *start, int *end)
{
    int sum = 0;
    int *p = start;
    do
    {
        sum += *p;
        p = p + 1;
    } while (p != end);
    return sum;
}
