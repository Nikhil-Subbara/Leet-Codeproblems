#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool isPalindrome(char* s) 
{
    int st = 0, end = strlen(s) - 1;

    while (st < end)
    {
        if (!isalnum(s[st]))//checks whwther the charther or not like abc or .,;/ ''
        {
            st++;
            continue;
        }

        if (!isalnum(s[end]))
        {
            end--;
            continue;
        }

        if (tolower(s[st]) != tolower(s[end]))//converts to lower and checks the end
            return false;

        st++;
        end--;
    }

    return true;
}