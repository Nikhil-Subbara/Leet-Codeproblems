class Solution {
    public int countKDifference(int[] a, int k) 
    {
        int count=0;
        int n = a.length;
        for (int i = 0;i<n-1;i++)
        {
            for (int j = i+1 ;j<n;j++)
            {
                int res = Math.abs(a[i]-a[j]);
                if (res == k) count++;
            }
        }
        return count;
    }
}