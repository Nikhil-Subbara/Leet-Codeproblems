void moveZeroes(int* a, int n) 
{
    int i=0;
    if(n>1)
    {
      for(i=0;i<n-1;i++)
     {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]==0)
           {
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
           }
        }
      }
    }
}