int minElement(int* a, int n) 
{
    int a1[n];
    int num=0,dig=0,sum=0;
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
        a1[i]=sum;
        printf("%d ",a1[i]);
    }
    int min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a1[i]<min)
        min=a1[i];
    }
    return min;
}