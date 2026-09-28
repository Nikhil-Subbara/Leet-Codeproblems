#include <math.h>
#include <string.h>

int maxDepth(char* s) 
{
    int depth = 0;
    int res = 0;

    for(int i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == '(')
        {
            depth++;

            if(depth > res)
                res = depth;
        }

        if(s[i] == ')')
        {
            depth--;
        }
    }

    return res;
}