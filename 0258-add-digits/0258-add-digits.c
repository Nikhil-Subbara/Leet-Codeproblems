int addDigits(int n) 
{
    int sum=0;
    while(n>=10)
    {
        sum=0;
        while(n!=0)
        {
          int digit=n%10;
          sum=sum+digit;
          n=n/10;
        }
        n=sum;
    }
    if(n<10)
     return n;
    return sum;
}