int maxProduct(int n) 
{
    int c = 0;
    int num = n;

    while(n != 0)
    {
        n = n / 10;
        c++;
    }

    int a[c];
    int i = 0;

    while(num != 0)
    {
        a[i] = num % 10;
        i++;
        num = num / 10;
    }

    int max1 = 0, max2 = 0;

    for(int i = 0; i < c; i++)
    {
        if(a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i] > max2)
        {
            max2 = a[i];
        }
    }

    return max1 * max2;
}