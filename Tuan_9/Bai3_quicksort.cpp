void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int* partition (int *start, int *end)
{
    int pivot = *start;  
 
    int *p = start -1;

    for (int *q = start; q < end; q++)
    {
        if (*q <= pivot)
        {
            p++;
            swap(p, q);
        }
    }
    swap(p+1, end);
    return (p + 1);
}

void quickSort(int *start, int *end)
{
    if (start < end)
    {
        int *p = partition(start, end);

        quickSort(start, p-1);
        quickSort(p+1, end);
    }
}
