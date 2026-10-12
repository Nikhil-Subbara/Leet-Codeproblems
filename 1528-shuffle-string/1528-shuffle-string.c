char* restoreString(char* s, int* indices, int n)
{
char dup[n + 1];
int num=0;
for (int i = 0; i < n; i++)
{
    num=indices[i];
    dup[num] = s[i];
}

dup[n] = '\0';

for (int i = 0; i < n; i++)
{
    s[i] = dup[i];
}

return s;
}
