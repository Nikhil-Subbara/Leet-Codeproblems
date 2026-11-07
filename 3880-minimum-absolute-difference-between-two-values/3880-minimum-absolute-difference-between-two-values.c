#include <math.h>

int minAbsoluteDifference(int* a, int n)
{
    int c = 9999999, mc = c;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[j] == 2)
                {
                    c = abs(i - j);

                    if (c < mc)
                    {
                        mc = c;
                    }
                    printf("%d ",mc);
                }
            }
        }
    }

    return mc == 9999999 ? -1 : mc;
}