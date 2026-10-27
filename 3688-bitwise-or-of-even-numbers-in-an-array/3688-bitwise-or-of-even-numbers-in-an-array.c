int evenNumberBitwiseORs(int* a, int n) 
{
    int res=0;
    for (int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            res=res|a[i];
        }
    }
    return res;
}