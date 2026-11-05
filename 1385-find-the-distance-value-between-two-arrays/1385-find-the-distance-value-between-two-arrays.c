#include<math.h>
int findTheDistanceValue(int* a, int an, int* b, int bn, int d) 
{
    int co=0;
    int res=0;
    for (int i=0;i<an;i++)
    {
        co=0;
        for(int j=0;j<bn;j++)
        {
          if(abs(a[i]-b[j])>d)
            co++;
        }
        if(co==bn)
        res++;
    }
    return res;
}