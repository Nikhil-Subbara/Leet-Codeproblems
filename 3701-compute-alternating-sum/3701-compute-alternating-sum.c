int alternatingSum(int* a, int n) 
{
    if(n==1)
    return a[0];
    int i=0,j=1,es=0,os=0;
    for (i=0;i<n;i++)
    {
        if(i%2==0)
        {
            es=es+a[i];
        }
        else
        {
            os=os+a[i];
        }
    }
    j=es-os;
    return j;
}