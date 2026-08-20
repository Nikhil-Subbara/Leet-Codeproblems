#include<string.h>
bool isAnagram(char* s, char* t)
{
    if(strlen(s)!=strlen(t))
    return false;
    // For 26 letters
    int count[26] = {0};
    // counting letters in s like how many a's 
    for (int i = 0; s[i] != '\0'; i++)
    {
        count[s[i] - 'a']++;
    }
//checking the Same no. of a's in t
    for (int i = 0; t[i] != '\0'; i++)
    {
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        //if there are same no.of letters then there no entry in if
        if (count[i] != 0)
            return false;
    }

    return true;
}
