/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<math.h>
int* leftRightDifference(int* a, int n, int* returnSize) 
{
  int ls[n];
  int rs[n];
  ls[0]=0;
  rs[n-1]=0;
  for(int i=1;i<n;i++)
  {
    ls[i]=ls[i-1]+a[i-1];
    printf("%d ",ls[i]);
  }
  for(int i=n-2;i>=0;i--)
  {
    rs[i]=rs[i+1]+a[i+1];
    printf("%d ",rs[i]);
  }
  int *res=(int*)malloc(n*sizeof(int));
  *returnSize=n;
  for(int j=0;j<n;j++)
  {
    res[j]=abs(rs[j]-ls[j]);
  }
  return res;
}