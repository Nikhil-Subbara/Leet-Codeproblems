int sumOfGoodNumbers(int* a, int n, int k)
{
int res = 0;
for(int i=0;i<n;i++)
{
if((i-k<0 || a[i]>a[i-k]) &&
(i+k>=n || a[i]>a[i+k]))
{
res=res+a[i];
}
}
return res;
}
