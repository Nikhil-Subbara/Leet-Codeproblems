void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) 
{
    int size = m+n;
    //int *ans= (int *)malloc(size*sizeof(int));
    //int returnSize=size;
    for (int i=0;i<n;i++)
    {
        nums1[i+m]=nums2[i];
    }
    for(int i = 0; i < m+n-1; i++)
   {
    for(int j = 0; j < m+n-i-1; j++)
    {
        if(nums1[j] > nums1[j+1])
        {
            int temp = nums1[j];
            nums1[j] = nums1[j+1];
            nums1[j+1] = temp;
        }
    }
   }
    //return ans;
}