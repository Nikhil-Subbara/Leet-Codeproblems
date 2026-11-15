/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) 
{
    int *res = (int *)malloc(2 * sizeof(int));

    int low = 0;
    int high = numsSize - 1;
    int first = -1;
    int last = -1;

    // Find first occurrence
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target)
        {
            first = mid;
            high = mid - 1;   // search left
        }
        else if (nums[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    // Find last occurrence
    low = 0;
    high = numsSize - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target)
        {
            last = mid;
            low = mid + 1;    // search right
        }
        else if (nums[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    res[0] = first;
    res[1] = last;

    *returnSize = 2;

    return res;
}