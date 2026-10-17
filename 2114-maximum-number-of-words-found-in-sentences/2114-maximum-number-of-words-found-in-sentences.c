int mostWordsFound(char** s, int n)
{
char *a;
int count = 0, res = 0;
for (int i = 0; i < n; i++)
{
    a = s[i];
    count = 0;

    for (int j = 0; a[j] != '\0'; j++)
    {
        if (a[j] == ' ')
        {
            count++;
        }
    }

    count++;  // Words = spaces + 1

    if (res < count)
        res = count;
}
return res;
}
