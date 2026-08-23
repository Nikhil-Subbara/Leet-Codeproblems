bool checkDivisibility(int n) 
{
    int  sum=0,product=1;
    int res=0, rem=0;int org=n;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        product=product*rem;
        n=n/10;
    }
    //printf(" %d %d ",sum,product);
    res = (sum+product);
    //printf("%d %d",res,org);
    if (org % res==0)
    {
        return true;
    }
    return false;
}