/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* concatWithReverse(int* nums, int numsSize, int* returnSize) 
{
   int n=numsSize*2;
   int * ans = (int *)malloc(n * sizeof (int ));
   * returnSize = n;
   int i=0;
   for (i=0;i<numsSize;i++)
   {
     ans[i]=nums[i];
     ans[i+numsSize]=nums[numsSize-i-1];
   }
   return ans;
}