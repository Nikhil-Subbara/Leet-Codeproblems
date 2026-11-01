int minMergedInteger(int* a, int n)
{
     int min = 99999999;
     int c,b,t;
     for (int i=0;i<n;i=i+2)
      {
        b=a[i];c=a[i+1];
         t=c;
         while(t>0)
         {
             b=b*10;
             t=t/10;
         }
         b=b+c;
            if(b<min)
            {
                min=b;
            }
      }
    return min;
}