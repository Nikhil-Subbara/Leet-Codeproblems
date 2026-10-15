int digitSum(int num)
{
    if (num<9)
    return num;
    int sum=0,dig;
    while(num!=0)
    {
      dig=num%10;
      sum=sum+dig;
      num=num/10;
    }
    return sum;
}
int countEven(int num) 
{
    int res=0,c=0;
    for(int i=1;i<=num;i++)
    {
        res=digitSum(i);
        if(res%2==0)
        c++;
    }
    return c;
}