#include<math.h>
int findPermutationDifference(char* s, char* t) 
{
    int id=0;
    for(int i=0;s[i]!='\0';i++)
    {
        for(int j=0;t[j]!='\0';j++)
        {
            if(s[i]==t[j])
            {
             id=id+abs(i-j);
            }
        }
    }
    return id;
}