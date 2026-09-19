bool search(int *a,int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        return true;
    }
    return false;
}
int findFinalValue(int* a, int n, int org) 
{
    int i=0;
    for(int i=0;i<n;i++)
    {
        if(search(a,n,org))
        {
            org=org*2;
        }
    }
    return org;
}