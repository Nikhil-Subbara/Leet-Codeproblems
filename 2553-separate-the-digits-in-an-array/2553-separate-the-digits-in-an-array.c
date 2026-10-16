
#include <stdlib.h>

int* separateDigits(int* a, int n, int* returnSize)
{
    int size = 0;

    // Count the total number of digits
    for (int i = 0; i < n; i++)
    {
        int num = a[i];

        if (num == 0)
            size++;

        while (num > 0)
        {
            size++;
            num /= 10;
        }
    }

    int *res = malloc(size * sizeof(int));

    if (res == NULL && size > 0)
    {
        *returnSize = 0;
        return NULL;
    }

    int k = 0;
    int temp[10];

    for (int i = 0; i < n; i++)
    {
        int num = a[i];
        int count = 0;

        if (num == 0)
        {
            res[k++] = 0;
            continue;
        }

        while (num > 0)
        {
            temp[count++] = num % 10;
            num /= 10;
        }

        for (int j = count - 1; j >= 0; j--)
        {
            res[k++] = temp[j];
        }
    }

    *returnSize = k;
    return res;
}