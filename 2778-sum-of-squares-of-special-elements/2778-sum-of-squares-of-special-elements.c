int sumOfSquares(int* nums, int n) 
{
  int i=0,sum=0;
  //sum=nums[0]*nums[0];
  for(i=1;i<=n;i++)
  {
    if(n%i==0)
    {
        sum=sum + nums[i-1]*nums[i-1];
        //printf("%d ",i);
    }
  } 
  return sum; 
}