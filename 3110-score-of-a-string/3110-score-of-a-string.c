#include<math.h>
#include<string.h>
int scoreOfString(char* s) 
{
    int sum=0,count=0;
    int n=strlen(s);
    for(int i=0 ; i<n-1;i++)
    {
       count=abs(s[i]-s[i+1]);
       printf("%d %d\n",sum,count);
       sum=sum+count;
       count=0;
    }
    return sum;
    /*int b=s[0]-s[1];
    printf("%d",b);
    return 0;*/
}