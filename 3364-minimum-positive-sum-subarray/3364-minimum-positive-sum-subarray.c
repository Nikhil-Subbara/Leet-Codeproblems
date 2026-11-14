int minimumSumSubarray(int* a, int n, int l, int r) 
{
    int min = 9999999;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = i; j < n; j++)
        {
            sum = sum + a[j];

            int len = j - i + 1;

            if (len >= l && len <= r)
            {
                if (sum > 0 && sum < min)
                {
                    min = sum;
                }
            }

            if (len >= r)
                break;
        }
    }

    if (min == 9999999)
        return -1;

    return min;
}