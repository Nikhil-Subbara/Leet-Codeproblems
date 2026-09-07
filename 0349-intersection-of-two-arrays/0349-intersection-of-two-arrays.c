/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) 
{
    int m = nums1Size + nums2Size;
    int *ans = (int *)malloc(m * sizeof(int));

    int i = 0, j = 0, k = 0;

    for (i = 0; i < nums1Size; i++)
    {
        for (j = 0; j < nums2Size; j++)
        {
            if (nums1[i] == nums2[j])
            {
                ans[k] = nums2[j];
                k++;
                //break;   // important
            }
        }
    }

    int p = 0;

    for (int l = 0; l < k; l++)
    {
        int duplicate = 0;

        for (int x = 0; x < p; x++)
        {
            if (ans[x] == ans[l])
            {
                duplicate = 1;
                break;
            }
        }

        if (duplicate == 0)
        {
            ans[p] = ans[l];
            p++;
        }
    }

    *returnSize = p;
    return ans;
}