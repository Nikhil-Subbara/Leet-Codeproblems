int findPeakElement(int* a, int n) 
{
    if(n==1)
    {
        return 0;
    }

    if(n==2)
    {
        if(a[1]>a[0])
            return 1;
        else
            return 0;
    }

    if(a[0]>a[1])
        return 0;

    if(a[n-1]>a[n-2])
        return n-1;

    for(int i=1;i<n-1;i++)
    {
        if((a[i]>a[i-1])&&(a[i]>a[i+1]))
        {
            return i;
        }
    }

    return 0;
}