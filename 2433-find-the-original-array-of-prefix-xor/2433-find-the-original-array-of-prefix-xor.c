/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findArray(int* a, int n, int* returnSize) 
{
    int * ans=(int*)malloc(n*sizeof(int));
    * returnSize = n;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        ans[i]=a[i];
        else
        ans[i]=a[i]^a[i-1];
    }
    return ans;
}