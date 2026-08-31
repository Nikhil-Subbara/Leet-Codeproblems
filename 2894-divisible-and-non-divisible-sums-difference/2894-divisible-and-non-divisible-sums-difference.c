int differenceOfSums(int n, int m) 
{
    int sd=0,snd=0;
    for(int i=1;i<=n;i++)
    {
        if(i%m==0)
        sd=sd+i;
        else
        snd=snd+i;
    }
    int r=0;
    r=snd-sd;
    return r;
}