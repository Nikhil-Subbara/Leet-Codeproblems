bool uniqueOccurrences(int* a, int n)
{
int count[n];
for (int i = 0; i < n; i++)
{
    count[i] = 0;

    for (int j = 0; j < n; j++)
    {
        if (a[i] == a[j])
        {
            count[i]++;
        }
    }
}
for (int i = 0; i < n; i++)
{
    for (int j = i + 1; j < n; j++)
    {
        if (a[i] == a[j])
            continue;

        if (count[i] == count[j])
            return false;
    }
}
return true;
}
