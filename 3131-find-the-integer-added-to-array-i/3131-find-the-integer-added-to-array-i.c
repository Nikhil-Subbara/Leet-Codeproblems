int Minimum(int *a, int n)
{
    int min = a[0];
    for(int i = 0; i < n; i++)
    {
        if(a[i] < min)
            min = a[i];
    }
    return min;
}
int addedInteger(int* a, int an, int* b, int bn)
{
    int m1 = Minimum(a, an);
    int m2 = Minimum(b, bn);
    return (m2 - m1);
}