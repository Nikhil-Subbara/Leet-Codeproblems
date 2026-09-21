int* sortArrayByParity(int* a, int n, int* returnSize) 
{
    int *res = (int*)malloc(n * sizeof(int));
    *returnSize = n;

    int left = 0;
    int right = n - 1;

    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            res[left] = a[i];
            left++;
        }
        else
        {
            res[right] = a[i];
            right--;
        }
    }

    return res;
}