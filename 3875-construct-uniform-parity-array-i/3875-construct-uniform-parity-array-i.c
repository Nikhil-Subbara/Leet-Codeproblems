bool checkeven(int* a, int n)
{
    int i=0,c=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        c++;
    }
    if(c==n)
    return true;
  return false;
}
bool checkodd(int* a, int n)
{
    int i=0,c=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        c++;
    }
    if(c==n)
    return true;
  return false;
}
bool uniformArray(int* a, int n) 
{
    int n2[n];
   if (checkeven(a,n)==true||checkodd(a,n)==true)
    return true;
   else
   {
      n2[0]=a[0]-a[1];
     for(int i=1;i<n-1;i++)
     {
       if((n2[0]-a[i])%2!=0)
       n2[i]=a[i]-a[i+1];
       else
       n2[i]=a[i];
     }
     return true;
   }
}