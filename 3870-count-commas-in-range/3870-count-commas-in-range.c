int countCommas(int n)
{
    int count1 = 0, count2 = 0;

    if (n < 1000)
        return 0;

    else if (n <= 99999)
        count1 = n - 1000 + 1;

    else
    {
        count1 = 99999 - 1000 + 1;
        count2 = 1;
    }

    return count1 + count2;
}