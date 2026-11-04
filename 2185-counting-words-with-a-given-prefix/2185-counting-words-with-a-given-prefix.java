class Solution {
    public int prefixCount(String[] a, String pref) 
    {
        int res=0;
        int n = a.length;
        for(int i=0;i<n;i++)
        {
            String word = a[i];
            if(word.startsWith(pref))
            {
                res++;
            }
        }
        return res;
    }
}