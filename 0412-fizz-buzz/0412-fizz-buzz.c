/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) 
{
    int i = 0;
    
    char** ans = (char**)malloc(n * sizeof(char*));
    *returnSize = n;

    for(i = 0; i < n; i++)
    {
        ans[i] = (char*)malloc(10 * sizeof(char));

        if((i + 1) % 3 == 0 && (i + 1) % 5 == 0)
            sprintf(ans[i], "FizzBuzz");

        else if((i + 1) % 3 == 0)
            sprintf(ans[i], "Fizz");

        else if((i + 1) % 5 == 0)
            sprintf(ans[i], "Buzz");

        else
            sprintf(ans[i], "%d", i + 1);
    }

    return ans;
}