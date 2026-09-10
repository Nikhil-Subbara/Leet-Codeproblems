int sumOfUnique(int* a, int n) 
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
                count++;
        }
        if (count == 1)
            sum += a[i];
        printf("%d ",sum);
    }
    return sum;
}