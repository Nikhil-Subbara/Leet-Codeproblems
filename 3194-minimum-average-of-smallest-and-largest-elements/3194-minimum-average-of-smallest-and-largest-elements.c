double minimumAverage(int* a, int n) 
{
    for(int i=0;i<n-1;i++)
   {
    for(int j=0;j<n-1-i;j++)
    {
        if(a[j]>a[j+1])
        {
            float temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
   }
   float avg[n/2];
   for(int i=0;i<n/2;i++)
   {
    avg[i]=(a[i]+a[n-1-i])/2.0;
   }
   float min=avg[0];
   for(int i=0;i<n/2;i++)
   {
    if(min>avg[i])
    min=avg[i];
   }
   return min;
}