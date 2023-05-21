

void printImage(const Image& img)
{
    
    
    int arr[img.height][img.width];
    for (int i = 0; i < img.height*img.width; i++)
    {
        arr[i/img.width][i%img.width] = img.pixels[i];
    }
    for (int i = 0; i < img.height; i++)
    {
        for (int j = 0; j < img.width; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
Image halve(const Image& img)
{
    int arr[img.height][img.width];
    Image res;
    if (img.height%2 == 0)
    {
        res.height = img.height/2;
    }
    else
    {
        res.height = img.height/2 + 1;
    }
    if (img.width%2 == 0)
    {
        res.width = img.width/2;
    }
    else
    {
        res.width = img.width/2 + 1;
    }
    int resArr[res.height*res.width];
    
    for (int i = 0; i < img.height*img.width; i++)
    {
        arr[i/img.width][i%img.width] = img.pixels[i];
    }
    int k = 0;
    for (int i = 0; i < img.height; i++)
    {
        for (int j = 0; j < img.width; j++)
        {
            if (i%2 == 0 && j%2==0)
            {
                resArr[k] = arr[i][j];
                k++;
            }
        }
    }
    res.pixels = resArr;
    return res;
}
