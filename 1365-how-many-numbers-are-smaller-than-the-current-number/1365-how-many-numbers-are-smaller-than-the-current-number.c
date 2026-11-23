/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* a, int n, int* returnSize) 
{
    int *res = (int * )malloc(n * sizeof(int));
    *returnSize = n;
    for (int i =0 ;i<n;i++)
    {
        int count = 0;
        int num = a[i];
        for (int j=0;j<n;j++)
        {
            if (num>a[j])
            count++;
        }
        res[i]=count;
    }
    return res;
}