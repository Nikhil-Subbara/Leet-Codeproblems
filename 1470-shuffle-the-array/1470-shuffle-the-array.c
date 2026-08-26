

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize)
{
   int *ans = (int *)malloc(numsSize * sizeof(int));
    *returnSize = numsSize;
    int i,j=0;
    for(i=0;i<n;i++)
    {
        ans[j]=nums[i];j++;
        ans[j]=nums[i+n];j++;
    }
    return ans;
}