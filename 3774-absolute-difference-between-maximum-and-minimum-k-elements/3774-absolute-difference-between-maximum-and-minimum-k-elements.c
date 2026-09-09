#include<math.h>
int absDifference(int* a, int n, int k) 
{
    if (n==1)
    return 0;
    for(int i=0;i<n-1;i++)
   {
    for(int j=0;j<n-1-i;j++)
    {
        if(a[j]>a[j+1])
        {
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
   }
   int suml=0,sums=0;
   int count=0;
   for(int i=0;i<k;i++)
   sums=sums+a[i];
   for(int i=n-1;i>=0;i--)
   {
    //printf("%d",count);
    if(count==k)
    {
        break;
    }
    else
    {
        suml=suml+a[i];
        count++;
    }
   }
   printf("%d %d",suml,sums);
   int res=abs(suml-sums);
   return res;
}