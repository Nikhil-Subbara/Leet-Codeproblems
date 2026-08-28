int findNumbers(int* a, int n) 
{
    int c=0,digit=0;
    for(int i=0;i<n;i++)
    {
        int num=a[i];
        while(num!=0)
        {
            num=num/10;
            digit++;
        }
        if(digit%2==0)
        c++;
        digit=0;
    }
    return c;
}