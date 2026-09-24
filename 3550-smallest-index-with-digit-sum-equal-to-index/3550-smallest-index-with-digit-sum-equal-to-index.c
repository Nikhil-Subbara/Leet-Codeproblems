int smallestIndex(int* a, int n) 
{
    int res[n];
    int min=0;
    int sum=0,num=0;
    int dig=0,c=0;
    for(int i=0;i<n;i++)
    {
        num=a[i];
        sum=0;
        while(num!=0)
        {
          dig=num%10;
          sum=sum+dig;
          num=num/10;
        }
        if(sum==i)
        {
            res[c]=i;
            c++;
        }
    }
    if(c==0)
    return -1;
    min=res[0];
    for(int i=0;i<c;i++)
    {
        if(min>res[i])
        min=res[i];
    }
    return min;
}