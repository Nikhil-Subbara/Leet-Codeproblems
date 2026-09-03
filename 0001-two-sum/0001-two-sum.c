int* twoSum(int* a, int n, int target, int* returnSize) 
{
    int *ans = (int *)malloc(2 * sizeof(int));

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == target)
            {
                *returnSize = 2;
                ans[0] = i;
                ans[1] = j;
                return ans;
            }
        }
    }

    *returnSize = 0;
    free(ans);
    return NULL;
}