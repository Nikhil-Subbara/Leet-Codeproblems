bool isHappy(int n) 
{
    int rem=0,sum=0,n1=0;
    while(n!=1 && n!=4)
    {
        printf("%d ",n);
        sum=0;
        while(n!=0)
      {
        rem=n%10;
        sum=sum+(rem*rem);
        n=n/10;
      }
      n=sum;
    }
    if(n==1)
    return true;
    else
    return false;
}