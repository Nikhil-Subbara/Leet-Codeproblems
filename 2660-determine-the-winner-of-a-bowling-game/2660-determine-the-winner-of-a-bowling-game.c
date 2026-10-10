int score(int *a,int n)
{
    int sum=0,i=0;
    for(i=0;i<n;i++)
    {
       if(a[i]==10)
       break;
       sum=sum+a[i];
    }
    if(i<n)
    {
        sum=sum+a[i];
        i++;
    }
    while (i < n)
    {
        if (a[i - 1] == 10 || (i >= 2 && a[i - 2] == 10))
            sum = sum + 2 * a[i];
        else
            sum = sum + a[i];

        i++;
    }

    return sum;
}
int isWinner(int* p1, int p1n, int* p2, int p2n) 
{
    int s1=0,s2=0;
    s1=score(p1,p1n);
    s2=score(p2,p2n);
    if(s1>s2)
    return 1;
    else if (s1<s2)
    return 2;
    else
    return 0;
}