int countSpecialIntegers(int* a, int n) 
{
    int i, c = 0;
    int blocks[101] = {0};

    for (i = 0; i < n; i++)
    {
        if (i == 0 || a[i] != a[i-1])
            blocks[a[i]]++;
    }

    for (i = 1; i <= 100; i++)
    {
        if (blocks[i] == 1)
            c++;
    }

    return c;
}