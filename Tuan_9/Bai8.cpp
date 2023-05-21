unsigned int mystrlen(char *s)
{
    int i = -1;
    int count = 0;
    do
    {
        i++;
        count++;
    } while (*(s + i) >= 'a' && *(s+i) <= 'z');
    return count - 1;
}
void mystrcpy(char *destination, const char *source)
{
    
    int i = 0;
    while (*(source + i) >= 'a' && *(source + i) <= 'z')
    {
        
        *(destination + i) = *(source + i);
        i += 1;
    }
}

void mystrcat(char *destination, const char *source)
{
    char *p = destination;
    do
    {
        p += 1;
    }
    while (*p >= 'a' && *p <= 'z');
    int i = -1;
    do
    {
        i += 1;
        *(p + i) = *(source + i);
    } while (*(source + i) >= 'a' && *(source + i) <= 'z');
}

void myreverse(char *s)
{
    int size = mystrlen(s);
    char *p = s;
    char *q = s + size;
    for (int i = 0; i < size/2; i++)
    {
        char temp = *(p + i);
        *(p + i) = *(q - i - 1);
        *(q - i - 1) = temp;
    }
}
