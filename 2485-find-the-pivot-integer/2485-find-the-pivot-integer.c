int pivotInteger(int n) 
{
    int ts=0;
    int hs=0;
    ts=(n*(n+1))/2;
    for(int i=1;i<=n;i++)
    {
        hs=(i*(i+1))/2;
        if(hs==ts-hs+i)
        return i;
    }
    return -1;
}