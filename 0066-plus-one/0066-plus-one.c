int* plusOne(int* digits, int digitsSize, int* returnSize) 
{
    int *ans = (int *)malloc((digitsSize + 1) * sizeof(int));

    int i = digitsSize - 1;

    while (i >= 0)
    {
        if (digits[i] < 9)
        {
            digits[i]++;
            break;
        }
        else
        {
            digits[i] = 0;
        }

        i--;
    }

    if (i == -1)
    {
        ans[0] = 1;

        for (int j = 1; j <= digitsSize; j++)
            ans[j] = 0;

        *returnSize = digitsSize + 1;
    }
    else
    {
        for (int j = 0; j < digitsSize; j++)
            ans[j] = digits[j];

        *returnSize = digitsSize;
    }

    return ans;
}