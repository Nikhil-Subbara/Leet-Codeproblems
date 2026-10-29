#include <string.h>

char* removeStars(char* s)
{
int l = strlen(s);
char c[l + 1];
int j = 0;
for (int i = 0; i < l; i++)
{
    if (s[i] == '*')
    {
        if (j > 0)
            j--;
    }
    else
    {
        c[j] = s[i];
        j++;
    }
}
c[j] = '\0';
for (int i = 0; i <= j; i++)
{
    s[i] = c[i];
}
return s;
}
