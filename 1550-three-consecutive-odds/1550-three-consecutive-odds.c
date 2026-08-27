bool threeConsecutiveOdds(int* a, int n) 
{
    int c=0;
    for(int i=0;i<n-2;i++)
    {
        if(a[i]%2!=0)
        {
            if(a[i+1]%2!=0)
            {
                if(a[i+2]%2!=0)
                {
                    return true;
                }
            }
        }
    }
    return false;
}