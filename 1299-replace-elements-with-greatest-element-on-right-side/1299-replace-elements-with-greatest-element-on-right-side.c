/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* replaceElements(int* a, int n, int* returnSize) 
{
    int *res = (int*)malloc(n * sizeof(int));
    *returnSize = n;

    int max = -1;

    for(int i = n - 1; i >= 0; i--)
    {
        res[i] = max;

        if(a[i] > max)
        {
            max = a[i];
        }
    }

    return res;
}