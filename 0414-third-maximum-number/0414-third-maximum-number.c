int thirdMax(int* a, int n)
{
    int i, j, temp;
    int count = 1;

    // Sort in descending order
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    } 
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    // Find third distinct maximum
    for (i = 1; i < n; i++)
    {
        if (a[i] != a[i - 1])
        {
            count++;

            if (count == 3)
                return a[i];
        }
    }

    // If fewer than 3 distinct values
    return a[0];
}