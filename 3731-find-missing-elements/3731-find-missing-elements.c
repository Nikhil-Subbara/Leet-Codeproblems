/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findMissingElements(int* a, int n, int* returnSize) 
{
    *returnSize = 0;

    for(int i = 0; i < n - 1; i++) 
    { 
        for(int j = 0; j < n - 1 - i; j++) 
        { 
            if(a[j] > a[j + 1]) 
            { 
                int temp = a[j]; 
                a[j] = a[j + 1]; 
                a[j + 1] = temp; 
            } 
        } 
    } 

    int max = a[n - 1]; 
    int min = a[0]; 

    int j = 0; 
    int *ans = (int *)malloc(max * sizeof(int)); 

    for(int i = min; i <= max; i++) 
    { 
        if(j < n && a[j] == i) 
        { 
            j++; 
        } 
        else 
        { 
            ans[*returnSize] = i; 
            (*returnSize)++; 
        } 
    } 

    return ans; 
}