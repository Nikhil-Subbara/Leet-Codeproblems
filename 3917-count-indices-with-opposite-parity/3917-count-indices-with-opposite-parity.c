/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countOppositeParity(int* a, int n, int* returnSize) 
{
    int *res = (int *)malloc(n*sizeof(int*));
    *returnSize = n;
    if (n<1)
    return 0;
    int count=0;
    for (int i=0;i<n;i++)
    {
        count = 0; 
        if (a[i]%2==0)
        {
            for (int j=i;j<n;j++)
            {
              if (a[j]%2!=0)
              count++;
            }
        }
        else
        {
            for (int j=i;j<n;j++)
            {
              if (a[j]%2==0)
              count++;
            }
        }
        res[i]=count;
    }
    return res;
}