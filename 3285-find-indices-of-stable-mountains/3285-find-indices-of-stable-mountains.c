/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* stableMountains(int* h, int n, int t, int* returnSize) 
{
    int *res=(int*)malloc(n*sizeof(int));
    int j=0;
    for(int i=1;i<n;i++)
    {
       if (t<h[i-1])
       {
        res[j]=i;
        j++;
       }
    }
    *returnSize=j;
    return res;
}