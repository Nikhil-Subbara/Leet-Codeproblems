int findMiddleIndex(int* a, int n) 
{
    int ls=0,rs=0;
    int ts=0;
    for (int i=0;i<n;i++)
    {
        ts=ts+a[i];
    }
    for (int i=0;i<n;i++)
    {
        rs=ts-ls-a[i];
        if(ls==rs)
        return i;
        ls=ls+a[i];
    }
    return -1;
}