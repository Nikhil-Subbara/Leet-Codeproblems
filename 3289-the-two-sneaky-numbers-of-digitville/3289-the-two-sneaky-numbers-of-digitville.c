/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getSneakyNumbers(int* a, int n, int* returnSize) 
{
    int *ans =(int *)malloc(n*sizeof(int));
    int i=0,k=0;
    for(i=0;i<n;i++)
    {
        int key =a[i];
        int count=1;
        for(int j=i+1;j<n;j++)
        {
            if(key==a[j])
            {
                count++;
            }
        }
        if(count==2)
        {
            ans[k]=a[i];
            k++;
        }
    }
    *returnSize=k;
    return ans;
}