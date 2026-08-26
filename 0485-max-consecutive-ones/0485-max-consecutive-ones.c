int findMaxConsecutiveOnes(int* a, int n) 
{
    int i=0,c1=0;
    int max=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            c1++;
            if(c1>max)
            max=c1;
        }
        else
        c1=0;
    }
    return max;
}