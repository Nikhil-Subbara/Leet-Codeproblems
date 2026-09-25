#include<math.h>
int elevatorRequests(int n, int* r, int rs) 
{
    int time=r[0];
    for(int i=1;i<rs;i++)
    {
        time+=abs(r[i-1]-r[i]);
    }
    return time;
}