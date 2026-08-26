/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) 
{
    int i=0;
    int new=2*numsSize;
    int *ans=malloc(numsSize*8);
    for(i=0;i<numsSize;i++)
    {
        ans[i]=nums[i];
        ans[numsSize+i]=nums[i];
    }
    *returnSize=numsSize*2;
    return ans;
}