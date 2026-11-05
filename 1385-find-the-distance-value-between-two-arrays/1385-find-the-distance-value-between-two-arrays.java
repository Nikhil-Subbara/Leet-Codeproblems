class Solution {
    public int findTheDistanceValue(int[] a, int[] b, int d) 
    {
        int co=0;
    int res=0;
    for (int i=0;i<a.length;i++)
    {
        co=0;
        for(int j=0;j<b.length;j++)
        {
          if(Math.abs(a[i]-b[j])>d)
            co++;
        }
        if(co==b.length)
        res++;
    }
    return res;
    }
}