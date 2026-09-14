int countPartitions(int* a, int n) 
{
  int ls=0,rs=0,c=0;
  for(int i=0;i<n-1;i++)
  {
    ls=ls+a[i];
    for(int j=i+1;j<n;j++)
    {
        rs=rs+a[j];
    }
    if((ls-rs)%2==0)
    {
        c++;
    }
    rs=0;
  }   
  return c;
}