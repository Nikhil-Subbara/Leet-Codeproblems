/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* targetIndices(int* a, int n, int target, int* returnSize) 
{
    int *ans=(int*)malloc(n*sizeof(int));
    int i=0,c=0;
    for(i=0;i<n-1;i++)
    {
       for(int j=0;j<n-i-1;j++)
       {
          if(a[j]>=a[j+1])
          {
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
          }
       }
    }
    int j=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==target)
        {
            ans[j]=i;
            j++;
            c++;
        }
    }
    * returnSize=c;
    return ans;
}