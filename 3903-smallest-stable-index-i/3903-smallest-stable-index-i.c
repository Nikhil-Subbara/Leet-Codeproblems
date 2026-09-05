int findMax(int *a, int n)
{
    int max = a[0];

    for(int i = 1; i < n; i++)
    {
        if(a[i] > max)
            max = a[i];
    }

    return max;
}

int findMin(int *a, int start, int n)
{
    int min = a[start];

    for(int i = start + 1; i < n; i++)
    {
        if(a[i] < min)
            min = a[i];
    }

    return min;
}

int firstStableIndex(int* a, int n, int k)
{
    int max, min;

    for(int i = 0; i < n; i++)
    {
        // maximum from 0 to i
        max = findMax(a, i + 1);

        // minimum from i to n-1
        min = findMin(a, i, n);

        // instability score
        if(max - min <= k)
            return i;
    }

    return -1;
}